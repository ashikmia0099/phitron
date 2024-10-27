from django.db import models
from task_catagory.models import CatagoryMadel

# Create your models here.

class ModelTask(models.Model):
    
    TaskTitle = models.CharField(max_length = 50)
    Description = models.TextField()
    Assign_date = models.DateField()
    Catagory =models.ManyToManyField(CatagoryMadel) 
    Complited = models.BooleanField(default= False)
    
    def __str__(self) -> str:
        return self.TaskTitle
    
    
    
    
    
    

