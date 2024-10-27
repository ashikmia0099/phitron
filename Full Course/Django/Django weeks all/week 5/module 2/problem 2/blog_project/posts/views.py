from django.shortcuts import render,redirect
from . import forms
from . import models
from django.contrib.auth.decorators import login_required
# Create your views here.
@login_required
def Post(request):
    if request.method == 'POST':
        view_model = forms.postForm(request.POST)
        if view_model.is_valid():
            view_model.instance.author = request.user
            view_model.save()
            return redirect('postpage')
    else:
        view_model = forms.postForm()
    return render(request,'post.html',{'model':view_model})

@login_required
def Edit(request,id):
    post = models.Post_model.objects.get(pk = id)
    postModel = forms.postForm(instance=post)
    if request.method == 'POST':
        view_model = forms.postForm(request.POST,instance=post)
        if view_model.is_valid():
            view_model.save()
            return redirect('homepage')
    else:
        view_model = forms.postForm()
    return render(request,'post.html',{'model':postModel})

@login_required
def DeletePage(request,id):
    post = models.Post_model.objects.get(pk = id)
    post.delete()
    return redirect('homepage')
