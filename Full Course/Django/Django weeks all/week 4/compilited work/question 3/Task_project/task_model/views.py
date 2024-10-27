from django.shortcuts import render,redirect
from . import forms
from . import models
# Create your views here.
def TaskModel(request):
    if request.method =="POST":
        task_form = forms.TaskForm(request.POST)
        if task_form.is_valid():
            task_form.save()
            return redirect('taskmodelpage')
    else:
        task_form = forms.TaskForm
        return render(request,'taskModel.html',{"form":task_form})

def Edited(request,id):
    task = models.ModelTask.objects.get(pk = id)
    task_form = forms.TaskForm(instance=task)
    if request.method =="POST":
        task_form = forms.TaskForm(request.POST, instance=task)
        if task_form.is_valid():
            task_form.save()
            return redirect('homepage')
        
    return render(request,'taskModel.html',{"form":task_form})

def DeleteButton(request,id):
    task = models.ModelTask.objects.get(pk = id)
    task.delete()
    return redirect('homepage')
