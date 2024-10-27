from django.urls import path,include
from . import views
urlpatterns = [
    path('',views.Register, name = 'registerpage'),
    path('login/',views.LoginPage, name ='loginpage')
    
]