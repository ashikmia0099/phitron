from django.shortcuts import render

# Create your views here.

def about(request):
    return render(request,'navigition/about.html')

def contract(request):
    return render(request,'navigition/contract.html')