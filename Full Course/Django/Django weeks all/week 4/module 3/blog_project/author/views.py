from django.shortcuts import render,redirect
from .import forms
# Create your views here.

def Author_view(request):
    if request.method =="POST":
        author_forms = forms.AuthorForm(request.POST)
        if author_forms.is_valid():
            author_forms.save()
            return redirect('authorpage')
            
    else:
        author_forms = forms.AuthorForm
    return render(request,'author.html',{'form':author_forms})
