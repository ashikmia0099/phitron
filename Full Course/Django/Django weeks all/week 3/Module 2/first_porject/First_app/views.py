from django.shortcuts import render

def Index(request):
    return render(request,'first_app/home.html')