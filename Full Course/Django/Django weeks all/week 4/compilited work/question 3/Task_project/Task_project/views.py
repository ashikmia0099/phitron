from django.shortcuts import render
from task_model.models import ModelTask
def Home(request):
    data  = ModelTask.objects.all()
    return render(request,'home.html',{'data':data})