from django.shortcuts import render,redirect
from .forms import FormClass
from django.contrib import messages
from django.contrib.auth.decorators import login_required
from django.contrib.auth.forms import AuthenticationForm,PasswordChangeForm
from django.contrib.auth import authenticate,login,logout,update_session_auth_hash




def RegisterForm(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            form = FormClass(request.POST)
            if form.is_valid():
                messages.success(request,'You Are successfully registered')
                form.save()
        
        else:
            form =FormClass()
        return render(request,'register.html',{'form':form})
    else:
        return render(request,'profilepage',)


def LoginForm(request):
    if not request.user.is_authenticated:
        if request.method == 'POST':
            form = AuthenticationForm(request=request, data=request.POST)
            
            if form.is_valid():
                name= form.cleaned_data['username']
                userpassword =form.cleaned_data['password']
                user = authenticate(username=name, password = userpassword)
                
                if user is not None:
                    messages.success(request,'Login successfully')
                    login(request, user)
                    return redirect('profilepage')
                
                else:
                    messages.warning(request, 'Loggin info incorrect')
                    return redirect('ragisterpage')
                    
        else:
            form= AuthenticationForm()
        return render(request,'login.html',{'form':form})
    else:
        return render(request,'profilepage',)
            
@login_required
def Profile(request):
        
    return render(request, 'profile.html')


@login_required
def LogoutPage(request):
    logout(request)
    messages.success(request,'Log out successfully')
    return redirect('homepage')

@login_required
def Change_password(request):
    if request.method == 'POST':
        form = PasswordChangeForm(user=request.user, data=request.POST)
        if form.is_valid():
            messages.success(request,'password changed successfully')
            form.save()
            update_session_auth_hash(request, form.user)
            return redirect('changepasswordpage')
    else:
        form = PasswordChangeForm(user = request.user)
    return render(request,'change_form.html',{'form':form})
        
