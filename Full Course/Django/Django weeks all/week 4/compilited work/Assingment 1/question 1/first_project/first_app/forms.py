from django import forms
from django.forms.widgets import NumberInput
import datetime

class NewForm(forms.Form):
    name = forms.CharField()
    last_name = forms.CharField()
    email = forms.EmailField( label='Please Enter your email address',)
    comment = forms.CharField(max_length=500,widget=forms.Textarea(attrs={'placeholder':'Write your comment','rows':3}),required=False)
    date = forms.DateField( widget=NumberInput(attrs={'type':'date'}))
    birthday = forms.DateField(widget=NumberInput(attrs={'type': 'date'}))
    BIRTHYEAR = ['1980','1981','1982','1983','1984','1985','1986','1987',]
    birth_year = forms.DateField(widget=forms.SelectDateWidget(years=BIRTHYEAR))
    age = forms.DecimalField()
    
    FAVORITE_COLOR = [
    ('blue', 'Blue'),
    ('green', 'Green'),
    ('black', 'Black'),]
    favorite_color = forms.ChoiceField(choices=FAVORITE_COLOR, widget=forms.RadioSelect)
    
    multi_choice = forms.MultipleChoiceField(choices= FAVORITE_COLOR, widget=forms.CheckboxSelectMultiple)
    
    confirm = forms.BooleanField()