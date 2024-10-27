from django.urls import path
from . import views

urlpatterns = [
    
    path('nab/',views.navbar, name='Navbar'),
    path('home/',views.home, name='Home'),
    path('about/',views.about, name='About'),
    path('form/',views.form, name='Form'),
    path('django_Form/',views.djangoForm, name='djanogForm'),
]
