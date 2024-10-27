from django.db import models
# Create your models here.

class CatagoryMadel(models.Model):
    catagory = models.CharField(max_length = 30)
    
    def __str__(self) -> str:
        return self.catagory
    
