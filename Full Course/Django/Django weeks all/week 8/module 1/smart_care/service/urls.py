from rest_framework.routers import DefaultRouter
from django.urls import path, include
from .views import ServiceView

router = DefaultRouter()

router.register('', ServiceView)

urlpatterns = [
    path('', include(router.urls)),
]