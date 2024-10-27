from django.http import HttpResponse

def contact(response):
    return HttpResponse("Hello World")

def home(response):
    return HttpResponse("The daily campous")