from django.shortcuts import render ,redirect
from .forms import contactForm , StudentData
def navbar(request):
    return render(request,'navbar.html')

def home(request):
    return render(request, 'home.html')

def about(request):
    if request.method =='POST':
        name = request.POST.get("username")
        email= request.POST.get("useremail")
        select= request.POST.get("select")
        return render  (request,'about.html',{'name':name , 'email':email, 'select': select})
    else:
        return render (request,'about.html')


def form(request):
    
    return render (request,'form.html')

# def djangoForm(request):
#     if request.method =="POST":
#         form = contactForm(request.POST, request.FILES)
#         if form. is_valid():
#             file = form.cleaned_data['file']
#             with open('./first_app/upload/'+file.name,'wb+')as destination:
#                 for chunk in file.chunks():
#                     destination.write(chunk)
#             print(form.cleaned_data)
#             return render(request, 'django.html', {'form':form})
#     else:
#         form = contactForm()
#     return render(request, 'django.html', {'form':form})


def studentForm(request):
    if request.method =='POST':
        form = StudentData(request.POST, request.FILES)
        if form. is_valid():
            print(form.cleaned_data)
            
    else:
        form = StudentData()
    return render(request, 'django.html',{'form':form})