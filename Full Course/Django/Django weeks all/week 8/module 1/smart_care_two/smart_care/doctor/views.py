from django.shortcuts import render
from rest_framework import viewsets
from .models import Specialization,Designation,AvailableTime,Doctor,Review 
from .serializers import SpecializationSerializer, DesignationSerializer, AvailableTimeSerializer, DoctorSerializer,ReviewSerializer


class SpecializationViews(viewsets.ModelViewSet):

    queryset = Specialization.objects.all()
    serializer_class = SpecializationSerializer
    
    

class DesignationViews(viewsets.ModelViewSet):

    queryset = Designation.objects.all()
    serializer_class = DesignationSerializer
    
    

class AvailableTimeViews(viewsets.ModelViewSet):

    queryset = AvailableTime.objects.all()
    serializer_class = AvailableTimeSerializer
    
    

class DoctorViews(viewsets.ModelViewSet):

    queryset = Doctor.objects.all()
    serializer_class = DoctorSerializer
    
    
    

class ReviewViews(viewsets.ModelViewSet):

    queryset = Review.objects.all()
    serializer_class = ReviewSerializer
    
    
