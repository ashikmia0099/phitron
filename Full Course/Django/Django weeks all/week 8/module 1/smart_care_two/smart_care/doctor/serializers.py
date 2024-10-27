from rest_framework import serializers
from .models import Specialization,Designation,AvailableTime,Doctor,Review 



class SpecializationSerializer(serializers.ModelSerializer):
    
    
    
    class Meta:
        model = Specialization
        fields = '__all__'
        
        

class DesignationSerializer(serializers.ModelSerializer):
    
    class Meta:
        model = Designation
        fields = '__all__'
        
        
        

class AvailableTimeSerializer(serializers.ModelSerializer):
    
    class Meta:
        model = AvailableTime
        fields = '__all__'
        
        
        

class DoctorSerializer(serializers.ModelSerializer):
    
    user = serializers.StringRelatedField(many=False)
    designation = serializers.StringRelatedField(many=True)
    specialization = serializers.StringRelatedField(many=True)
    availableTime = serializers.StringRelatedField(many=True)
    
    
    class Meta:
        model = Doctor
        fields = '__all__'
        

class ReviewSerializer(serializers.ModelSerializer):
    
    class Meta:
        model = Review
        fields = '__all__'
        