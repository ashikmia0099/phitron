from django.shortcuts import render
from .forms import NewForm
# Create your views here.


def ExampleForm(request):
    form = NewForm(request.POST)
    if form.is_valid():
        print(form.cleaned_data)
    return render(request,'home.html',{'form':form})