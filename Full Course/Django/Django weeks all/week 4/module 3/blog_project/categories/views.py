from django.shortcuts import render,redirect
from . import forms
# Create your views here.

def Category(request):
    if request.method =='POST':
        author_views = forms.Category_form(request.POST)
        if author_views.is_valid():
            author_views.save()
            return redirect("categorypage")
    else:
        author_views = forms.Category_form
    return render(request,'categori.html',{'catform':author_views})