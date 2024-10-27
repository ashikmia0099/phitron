from django.shortcuts import render
from .serializers import AppointmentSerilizer
from . models import Appointment
from rest_framework import viewsets
# Create your views here.

class AppointmentViewSet(viewsets.ModelViewSet):
    queryset = Appointment.objects.all()
    serializer_class =AppointmentSerilizer
    
    
    
    # Custom Query kortaci
    def get_queryset(self):
        queryset = super().get_queryset() # 7 no line ar prant ke inherit korlam
        patient_id = self.request.query_params.get('patient_id')
        
        if patient_id:
            queryset = queryset.filter(patient_id = patient_id)
            
        return queryset