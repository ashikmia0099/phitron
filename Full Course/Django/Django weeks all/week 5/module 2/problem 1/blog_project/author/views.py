from django.shortcuts import render,redirect
from .import forms
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import authenticate,login
from django.contrib import messages

# Create your views here.

def Register(request):
    if request.method == 'POST':
        register_form = forms.RegisterForm(request.POST)
        
        if register_form.is_valid():
            register_form.save()
            messages.success(request,'Account created successfully')
            return redirect('registerpage')
        
    else:
        register_form = forms.RegisterForm()
        return render(request,'register.html',{'form': register_form, 'type': 'Register'})

def LoginPage(request):
    if request.method == 'POST':
        form =AuthenticationForm(request, request.POST)
        
        if form.is_valid():
            user_name = form.cleaned_data['username']
            user_password = form.cleaned_data['password']
            user = authenticate(username=user_name,password = user_password)
            
            if user is not None:
                messages.success(request,'Logged in  Successfully')
                login(request,user)
                return redirect('loginpage')
            else:
                messages.warning(request,'Loggin info incorrect')
                return redirect('registerpage')
            
    else:
        form = AuthenticationForm()
        return render(request,'register.html',{'form':form, 'type':'Login'})