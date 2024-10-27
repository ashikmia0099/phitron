from django.shortcuts import render,redirect
from django.contrib.auth.decorators import login_required
from .import forms
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth import authenticate,login,update_session_auth_hash,logout
from django.contrib import messages
from posts.models import Post_model
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
                return redirect('profilepage')
            else:
                messages.warning(request,'Loggin info incorrect')
                return redirect('registerpage')
            
    else:
        form = AuthenticationForm()
        return render(request,'register.html',{'form':form, 'type':'Login'})
    
@login_required
def Profile(request):
    data = Post_model.objects.filter(author = request.user)
    return render(request,'profile.html',{'data':data})

@login_required
def Edit_Profile(request):
    if request.method == 'POST':
        change_pro_form = forms.ChangeUserData(request.POST,instance=request.user)
        
        if change_pro_form.is_valid():
            change_pro_form.save()
            messages.success(request,'Profile updated successfully')
            return redirect('profilepage')
        
    else:
        change_pro_form = forms.ChangeUserData(instance=request.user)
        return render(request,'update_profile.html',{'form': change_pro_form,})


def ChangePassword(request):
    if request.method == "POST":
        form = PasswordChangeForm(request.user, data=request.POST)
        if form.is_valid():
            form.save()
            messages.success(request,'Password Change Successfully')
            update_session_auth_hash(request, form.user)
            return redirect('changepasswordpage')
        
    else:
        form = PasswordChangeForm(user=request.user)
        return render(request,'change_pass.html',{'form':form})
    
    
def Logout(request):
    logout(request)
    return redirect('profilepage')
    