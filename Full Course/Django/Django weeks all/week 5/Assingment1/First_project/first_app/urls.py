from django.urls import path
from . import views
urlpatterns = [
    path('ragisterpage', views.RegisterForm, name='ragisterpage'),
    path('loginpage/', views.LoginForm, name='loginpage'),
    path('progilepage/', views.Profile, name='profilepage'),
    path('logoutpage/', views.LogoutPage, name='logoutpage'),
    path('changePassword/', views.Change_password, name='changepasswordpage'),
]