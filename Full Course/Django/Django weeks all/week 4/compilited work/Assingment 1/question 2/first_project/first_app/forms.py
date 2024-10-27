from django import forms
from . import models
import datetime

class UserForm(forms.ModelForm):
    class Meta:
        model  = models.UserModel
        fields = '__all__'
        
        widgets = {
            'date_field':forms.DateInput(attrs={'type':'date'}),
            'duration_field':forms.DateTimeInput(attrs={'type':'time',}),
            'time_field':forms.DateTimeInput(attrs={'type':'time',}),
        }
        