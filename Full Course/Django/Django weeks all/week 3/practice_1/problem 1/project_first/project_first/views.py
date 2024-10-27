from django.shortcuts import render
import datetime
# Create your views here.
def home(request):
    
    data = {'Name': "Ashik", "Courses": "CS Fundamental", "Institute": "Phitron", "list":['python is' , 'django', 'freamwork'], 'todayDate':datetime.datetime.now(), 'numlist': [10, 20, 30], 'singlenum':25, 'capfirst': 'capsecond', 'cutfilter': "enjoy programming and happy coding", 'cutfilter2': "enjoy - programming and - live - programming", 'dictsortss': [
    {'name': 'Josh', 'age': 19},
    {'name': 'Dave', 'age': 22},
    {'name': 'Joe', 'age': 31},],
      'firstfilter': ['Apple', 'Mango', 'Orange'], 'randomly': ['Banana', 'Mango', 'Orange'], 'striptages':'<b>I</b> <button>love</button> <span>dogs</span>', 'make': 'Helloworld',    }
    
    return render(request,'home.html',data)