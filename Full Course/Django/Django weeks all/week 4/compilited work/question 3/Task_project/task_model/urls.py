from django.urls import path,include
from . import views
urlpatterns = [
    path('',views.TaskModel, name='taskmodelpage'),
    path('edit/<int:id>',views.Edited, name='editedbutton'),
    path('delete/<int:id>',views.DeleteButton, name='deletebutton')
]
