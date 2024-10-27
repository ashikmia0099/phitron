from django.shortcuts import render 
from django.http import HttpResponse

def cources(response):
    return HttpResponse("This is cources")