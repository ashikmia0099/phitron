from django.contrib import admin
from django.urls import path
from . import views
urlpatterns = [
    path('',views.Registerview, name = 'registerpage'),
    path('profile/',views.Profileview, name = 'profilepage'),
    path('login/',views.Loginformview.as_view(), name = 'loginpage'),
    path('logout/',views.Logoutformview.as_view(), name = 'logoutpage'),
    path('addpost/',views.AddPost, name = 'addpostpage'),
    path('UserSite/details/<int:id>/', views.DetailPage.as_view(), name='detailpage'),
]
