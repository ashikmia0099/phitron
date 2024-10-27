from django.db import models

# Create your models here.

class Students(models.Model):
    name = models.CharField(max_length = 20)
    roll = models.IntegerField(primary_key = True)
    address = models.TextField()
    classes = models.IntegerField()
    school_name = models.TextField(default ='Nabinagar')

    def __str__(self) -> str:
        return f"{self.name} {self.roll}"