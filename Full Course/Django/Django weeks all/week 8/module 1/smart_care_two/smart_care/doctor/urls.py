from rest_framework.routers import DefaultRouter 
from django.urls import path, include
from .models import Specialization,Designation,AvailableTime,Doctor,Review
from .import views


router = DefaultRouter()

router.register('specialization',views.SpecializationViews )
router.register('designation',views.DesignationViews )
router.register('availableTime',views.AvailableTimeViews )
router.register('list',views.DoctorViews )
router.register('review',views.ReviewViews )


urlpatterns = [
    
    path('', include(router.urls))
]