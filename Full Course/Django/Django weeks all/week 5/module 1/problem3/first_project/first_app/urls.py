from django.contrib import admin
from django.urls import path, include
from . import views
urlpatterns = [
    path('',views.Home, name='homepage'),
    path('signinpage/',views.SigninPage, name='signinpage'),
    path('loginpage/',views.LoginPage, name='logininpage'),
    path('profilepage/',views.ProfilePage, name='profilepage'),
    
]