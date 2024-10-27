from django.urls import path,include
from . import views
urlpatterns = [
    path('',views.Register, name = 'registerpage'),
    path('login/',views.LoginPage, name ='loginpage'),
    path('profile/',views.Profile, name='profilepage'),
    path('profile/editprofile/',views.Edit_Profile, name='editprofilepage'),
    path('profile/edit/changePassword/',views.ChangePassword, name='changepasswordpage'),
    path('logout/',views.Logout, name='logoutpage'),
    
]