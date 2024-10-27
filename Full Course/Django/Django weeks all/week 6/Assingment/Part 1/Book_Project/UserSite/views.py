from django.shortcuts import render,redirect
from .forms import RegisterForm
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import authenticate, login,logout
from django.contrib.auth.views import LoginView,LogoutView
from django.urls import reverse_lazy
from django.contrib import messages
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from . forms import PostForm
from .models import PostModel
from django.views.generic import DetailView
# Create your views here.




def Registerview(request):
    if request.method == 'POST':
        form = RegisterForm(request.POST)
        if form.is_valid():
            form.save()
            
    else:
        form = RegisterForm(request.POST)
    return render(request,'register.html',{'form':form})




class Loginformview(LoginView):
    template_name = 'register.html'
    
    

    def get_success_url(self):
        return reverse_lazy('profilepage')
    
    def form_valid(self, form):
        messages.success(self.request, 'Login successfully')
        return super().form_valid(form)
        
    def form_invalid(self, form):
        messages.success(self.request, 'Invalid Username or Password')
        return super().form_valid(form)
        
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Login'
        return context
    
@method_decorator(login_required, name='dispatch')
class Logoutformview(LogoutView):
    template_name = 'register.html'
    next_page = reverse_lazy('homepage')


@login_required
def Profileview(request):
    return render(request,'profile.html')

@login_required
def AddPost(request):
    if request.method == 'POST':
        form = PostForm(request.POST)
        if form.is_valid():
            form.save()
    else:
        form= PostForm()
    return render(request, 'addspost.html',{'form':form})


class DetailPage(DetailView):
    model = PostModel
    pk_url_kwarg = 'id'
    template_name = 'detials.html'
    context_object_name = 'usersite'

