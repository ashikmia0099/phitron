from django.shortcuts import render,redirect
from .forms import RegisterForm
from django.contrib import messages
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm,SetPasswordForm 
from django.contrib.auth import authenticate, login, logout,update_session_auth_hash
# Create your views here.

def Home(request):
    return render(request,'home.html')

def SigninPage(request):
    if request.method == 'POST':
        forms = RegisterForm(request.POST)
        if forms.is_valid():
            messages.success(request,'Account created successfully')
            forms.save()
    else:
        forms = RegisterForm()
    return render(request,'signin.html', {'form': forms})


def LoginPage(request):
    if request.method == 'POST':
        form = AuthenticationForm(request= request, data=request.POST)
        
        if form.is_valid():
            name = form.cleaned_data['username']
            userpass = form.cleaned_data['password']
            user = authenticate(username = name,password = userpass)  # ai line check kortasi user database a aca ki na
            
            if user is not None:
                login(request,user)
                return redirect('profilepage')
    
    else:
        form = AuthenticationForm()
    return render(request,'login.html',{'form': form})
    
def ProfilePage(request):
    if request.user.is_authenticated:
        return render(request,'profile.html',{'user':request.user})
    else:
        return redirect('logininpage')

def LogoutPage(request):
    logout(request)
    return redirect('logininpage')

def pass_change(request):
    if request.method == 'POST':
        form = PasswordChangeForm(user=request.user, data= request.POST)
        
        if form.is_valid():
            form.save()
            update_session_auth_hash(request, form.user)
            return redirect('profilepage')
        
    else:
        form = PasswordChangeForm(user=request.user)
    return render(request,'pass_change.html',{'form':form})

def pass_change2(request):
    if request.method == 'POST':
        form = SetPasswordForm(user=request.user, data= request.POST)
        
        if form.is_valid():
            form.save()
            update_session_auth_hash(request, form.user)
            return redirect('profilepage')
        
    else:
        form = SetPasswordForm(user=request.user)
    return render(request,'pass_change.html',{'form':form})
    