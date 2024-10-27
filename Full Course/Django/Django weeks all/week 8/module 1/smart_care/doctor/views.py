from django.shortcuts import render
from rest_framework import viewsets

# Create your views here.

from . models import Specialization, Designation,AvailableTime,Doctor,Review


from .serializers import DoctorSerializer,SpecializationSerializer,DesignationSerializer,AvailableTimeSerializer,ReviewSerializer


class DoctorViewSet(viewsets.ModelViewSet):
    queryset =  Doctor.objects.all()
    serializer_class =DoctorSerializer
    
    
class SpecializationViewSet(viewsets.ModelViewSet):
    queryset = Specialization.objects.all()
    serializer_class = SpecializationSerializer
    
    
class DesignationViewSet(viewsets.ModelViewSet):
    queryset =  Designation.objects.all()
    serializer_class = DesignationSerializer
    
    
class AvailableTimeViewSet(viewsets.ModelViewSet):
    queryset = AvailableTime.objects.all()
    serializer_class = AvailableTimeSerializer
    
    
class ReviewViewSet(viewsets.ModelViewSet):
    queryset =  Review.objects.all()
    serializer_class = ReviewSerializer

