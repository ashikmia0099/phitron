from django import forms
from .models import Post_model

class postForm(forms.ModelForm):
    class Meta:
        model = Post_model
        fields = '__all__'