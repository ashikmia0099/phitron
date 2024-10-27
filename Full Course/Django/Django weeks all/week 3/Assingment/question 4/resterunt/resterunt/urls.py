
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',views.index, name= 'home'),
    path('show_item/',views.home, name='item'),
    path('about_us/',views.home, name='about'),
    path('first_app/',include('meal.urls')),
]
