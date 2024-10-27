
from django.contrib import admin
from django.urls import path,include
from . import views

urlpatterns = [
    path('admin/', admin.site.urls),
    path('',views.index, name= 'home'),
    path('show_item/',views.index, name='item'),
    path('about_us/',views.about, name='about'),
    path('meal/', include('meal.urls'))
]
