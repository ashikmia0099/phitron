from django import forms
from django.core import validators
class contactForm(forms.Form):
    name = forms.CharField(label='User Name', help_text="Write name must be 20 characters", widget= forms.Textarea(attrs={'text_area':"Enter Name", 'placeholder':"Enter Your Name"}),)
    file = forms.FileField()
    email = forms.EmailField(label='User Email')
    # age = forms.IntegerField()
    # weight = forms.FloatField()
    # balance = forms.FloatField()
    age = forms.CharField(widget=forms.NumberInput)
    
    birthday = forms.CharField(widget=forms.DateInput(attrs={'type':'date'}))
    appoinment = forms.DateTimeField(widget=forms.DateTimeInput(attrs={'type':'datetime-local'}))
    choice = [('s','small'), ('m','medium'),('l','large')]
    size = forms.ChoiceField(choices= choice, widget=forms.RadioSelect)
    multi_choice =[('a','apple'), ('o','orange'),('b','bannana')]
    meal = forms.MultipleChoiceField(choices= multi_choice, widget=forms.CheckboxSelectMultiple)
    check = forms.BooleanField()
    





# class StudentData(forms.Form):
#     name = forms.CharField(widget=forms.TextInput)
#     email = forms.CharField(widget=forms.EmailInput)
    
    # def clean_name(self):
    # #     valname = self.cleaned_data['name']
    # #     if len (valname) < 10:
    # #         raise forms.ValidationError("Enter name at least 10 characters")
    # #     return valname    
    #     clean = super().clean_name()
    #     valname = self.clean['name']
    #     valemail = self.clean['email']
        
    #     if len(valname) < 10:
    #         raise forms.ValidationError("enter name at least 10 characters")
    #     if '.com' is not valemail:
    #         raise forms.ValidationError("Use .com instead of email address")
    
    
    
    
    
    
class StudentData(forms.Form):
    name = forms.CharField(validators=[validators.MaxLengthValidator(10,message = 'at least 10 characters')])
    email = forms.CharField(widget=forms.EmailInput)
    
    
    