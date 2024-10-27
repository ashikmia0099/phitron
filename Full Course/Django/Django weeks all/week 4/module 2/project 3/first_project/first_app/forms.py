from django import forms
from first_app.models import StudentModel

class StudentForm(forms.ModelForm):
    class Meta:
        model = StudentModel
        fields = '__all__'
        labels = {
            'name':"Student Name",
            'roll':'Student Roll'
        }
        widgets = {
            'name' : forms.TextInput(attrs={'class': 'bg-info'})
        }