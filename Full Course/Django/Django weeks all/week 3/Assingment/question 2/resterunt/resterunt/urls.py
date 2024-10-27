
from django.contrib import admin
from django.urls import path
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',views.home, name= 'home'),
    path('show_item/',views.home, name='item'),
    path('about_us/',views.home, name='about')
]
