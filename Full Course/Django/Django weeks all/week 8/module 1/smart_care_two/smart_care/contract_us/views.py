from django.shortcuts import render
from rest_framework import viewsets
from .models import ContactUs
from .serializers import ContractUsSerializer


class ContractUsViewSet(viewsets.ModelViewSet):
    
    queryset = ContactUs.objects.all()
    serializer_class = ContractUsSerializer
