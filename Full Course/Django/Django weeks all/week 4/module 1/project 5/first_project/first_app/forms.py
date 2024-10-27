from django import forms

class contactForm(forms.Form):
    name = forms.CharField(label='User Name')
    email = forms.EmailField(label='User Email')
    age = forms.IntegerField()
    weight = forms.FloatField()
    balance = forms.FloatField()
    check = forms.BooleanField()
    birthday = forms.DateField()
    appoinment = forms.DateTimeField()
    choice = [('s','small'), ('m','medium'),('l','large')]
    size = forms.ChoiceField(choices= choice)
    multi_choice =[('a','apple'), ('o','orange'),('b','bannana')]
    meal = forms.MultipleChoiceField(choices= multi_choice)
    
    
    
    
    
    
    
    
    
    # name, email ,age , weight, balance_flot , checK_bool, birthday, appoinment,size, meal