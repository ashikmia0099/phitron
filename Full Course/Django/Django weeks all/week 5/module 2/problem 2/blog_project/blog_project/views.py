from django.shortcuts import render
from posts.models import Post_model
from categories.models import Category

def Home(request, category_slug = None):
    data = Post_model.objects.all()
    if category_slug is not None:
        category =Category.objects.get(slug = category_slug)
        data = Post_model.objects.filter(category = category)
    categories = Category.objects.all()
    
    return render(request,'home.html',{'all_data':data, 'category':categories})



 