from django.contrib import admin
from django.urls import path,include
from rest_framework.routers import DefaultRouter
from .views import PatientViewSet

router = DefaultRouter()

router.register('list',PatientViewSet)

urlpatterns = [
   
    path('', include(router.urls)),
   
]

