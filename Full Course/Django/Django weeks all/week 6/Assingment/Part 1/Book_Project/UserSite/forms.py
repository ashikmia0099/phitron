from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm,UserChangeForm
from django import forms
from .models import CategoryModel, PostModel

class RegisterForm(UserCreationForm):
    class Meta:
        model = User
        fields = ['username','first_name','last_name','email']
        
        
class CategoryForm(forms.ModelForm):
    class Meta:
       model = CategoryModel
       fields = '__all__'
       
       
class PostForm(forms.ModelForm):
    class Meta:
        model = PostModel
        fields = '__all__'