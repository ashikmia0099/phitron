from django.shortcuts import render
from rest_framework import viewsets
from .serializers import ServiceSerializer   
from .models import Service


class ServiceviewSet(viewsets.ModelViewSet):
    
    queryset = Service.objects.all()
    serializer_class = ServiceSerializer
