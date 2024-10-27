from django.shortcuts import render
import datetime
# Create your views here.
def home(request):
    d = {'author':'Rahim', 'age': 15, 'list':['python', 'django','backend'], 'bithday': datetime.datetime.now(), 
          'cources': [
        {
            'id': 1,
            'name':'Ashik',
            'fee': 5000
        },
        {
            'id': 2,
            'name':'Ashik ahammed',
            'fee': 15000
        },
        ]}
    return render(request,'home.html',d)