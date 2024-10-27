from django import forms
from .models import ModelTask

class TaskForm(forms.ModelForm):
    class Meta:
        model = ModelTask
        fields = "__all__"
        widgets = {
            'Assign_date': forms.DateInput(attrs={'type':'date'}),
            
        }