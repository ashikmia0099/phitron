from rest_framework.routers import DefaultRouter
from django.urls import path, include
from .views import DoctorViewSet,SpecializationViewSet,DesignationViewSet,AvailableTimeViewSet,ReviewViewSet

router = DefaultRouter()

router.register('',DoctorViewSet)
router.register('specialization',SpecializationViewSet)
router.register('available_time', DesignationViewSet)
router.register('designation',AvailableTimeViewSet)
router.register('reviews',ReviewViewSet)

urlpatterns = [
    path('', include(router.urls)),
]