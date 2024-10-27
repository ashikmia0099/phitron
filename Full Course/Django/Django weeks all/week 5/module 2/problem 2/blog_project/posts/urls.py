from django.urls import path,include
from . import views
urlpatterns = [
    path('post/',views.Post,name='postpage'),
    path('edit/<int:id>',views.Edit,name='editpage'),
    path('delete/<int:id>',views.DeletePage,name='deletepage')
    
]