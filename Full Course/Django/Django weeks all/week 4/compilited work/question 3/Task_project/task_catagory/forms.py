from django import forms
from . import models


class CatagoryForm(forms.ModelForm):
    class Meta:
        model = models.CatagoryMadel
        fields = "__all__"
    