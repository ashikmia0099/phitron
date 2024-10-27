from rest_framework.routers import DefaultRouter
from django.urls import path, include
from . views import ContractusViewset

# Create a router and register our ViewSets with it.

router = DefaultRouter() # aita amader router

router.register('', ContractusViewset) # router ar antina


urlpatterns = [
    path('', include(router.urls)),
]
