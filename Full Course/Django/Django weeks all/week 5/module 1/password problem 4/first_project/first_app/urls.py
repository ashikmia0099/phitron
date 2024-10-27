from django.contrib import admin
from django.urls import path, include
from . import views
urlpatterns = [
    path('',views.Home, name='homepage'),
    path('signinpage/',views.SigninPage, name='signinpage'),
    path('loginpage/',views.LoginPage, name='logininpage'),
    path('profilepage/',views.ProfilePage, name='profilepage'),
    path('logout/',views.LogoutPage, name='logoutpage'),
    path('passwordChange/',views.pass_change, name='passwoedchange'),
    path('passwordChange2/',views.pass_change2, name='passwoedchange2'),
    
]