from django.shortcuts import render
from .forms import RegisterForm
from django.contrib import messages
# Create your views here.

def Home(request):
    if request.method == 'POST':
        forms = RegisterForm(request.POST)
        if forms.is_valid():
            messages.success(request,'Account created successfully')
            forms.save()
    else:
        forms = RegisterForm()
    return render(request,'home.html', {'form': forms})