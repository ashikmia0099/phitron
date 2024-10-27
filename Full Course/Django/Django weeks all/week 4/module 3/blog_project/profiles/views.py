from django.shortcuts import render,redirect
from . import forms
# Create your views here.

def Profile(request):
    if request.method == 'POST':
        new_model = forms.profileForm(request.POST)
        if new_model.is_valid():
            new_model.save()
            return redirect('profilepage')
    else:
        new_model = forms.profileForm()
    return render(request,'profile.html',{'model':new_model})
