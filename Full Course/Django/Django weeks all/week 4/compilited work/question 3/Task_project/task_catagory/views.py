
from django.shortcuts import render,redirect
from . import forms 
from task_model import models
# Create your views here.
def TaskCatagory(request):
    if request.method =="POST":
        catagory_form = forms.CatagoryForm(request.POST)
        if catagory_form.is_valid():
            catagory_form.save()
            return redirect('taskcatagory')
    else:
        catagory_form = forms.CatagoryForm
        return render(request,'catagory.html',{"form":catagory_form})