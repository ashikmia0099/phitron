from django.shortcuts import render
from . import forms
# Create your views here.

def Home(request):
    form = forms.UserForm
    return render(request,'home.html',{'form':form})