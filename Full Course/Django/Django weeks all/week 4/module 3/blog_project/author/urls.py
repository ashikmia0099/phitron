from django.urls import path,include
from . import views
urlpatterns = [
    path('',views.Author_view, name = 'authorpage')
    
]