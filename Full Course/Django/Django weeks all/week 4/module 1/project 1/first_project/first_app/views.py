from django.shortcuts import render ,redirect

def navbar(request):
    return render(request,'navbar.html')

def home(request):
    return render(request, 'home.html')

def about(request):
    if request.method =='POST':
        name = request.POST.get("username")
        email= request.POST.get("useremail")
        return render  (request,'about.html',{'name':name , 'email':email})
    else:
        return render (request,'about.html',)


def form(request):
    
    return render (request,'form.html')