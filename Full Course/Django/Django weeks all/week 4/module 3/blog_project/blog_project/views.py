from django.shortcuts import render
from posts.models import Post_model

def Home(request):
    data = Post_model.objects.all()
    return render(request,'home.html',{'all_data':data})