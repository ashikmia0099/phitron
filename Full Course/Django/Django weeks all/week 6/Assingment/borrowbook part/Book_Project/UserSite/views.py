from django.shortcuts import render,redirect,get_object_or_404
from .forms import RegisterForm
from django.contrib.auth.forms import AuthenticationForm
from django.contrib.auth import authenticate, login,logout
from django.contrib.auth.views import LoginView,LogoutView
from django.urls import reverse_lazy
from django.contrib import messages
from django.utils.decorators import method_decorator
from django.contrib.auth.decorators import login_required
from . forms import PostForm,UserProfileForm
from .models import PostModel,Userprofile, BorrowHistory
from django.views.generic import DetailView
from django.utils import timezone

# Create your views here.

def Registerview(request):
    if request.method == 'POST':
        form = RegisterForm(request.POST)
        if form.is_valid():
            user = form.save()
            Userprofile.objects.create(user=user)
           
    else:
        form = RegisterForm()
    return render(request, 'register.html', {'form': form})


class Loginformview(LoginView):
    template_name = 'register.html'
    
    

    def get_success_url(self):
        return reverse_lazy('profilepage')
    
    def form_valid(self, form):
        messages.success(self.request, 'Login successfully')
        return super().form_valid(form)
        
    def form_invalid(self, form):
        messages.success(self.request, 'Invalid Username or Password')
        return super().form_valid(form)
        
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context['type'] = 'Login'
        return context
    
@method_decorator(login_required, name='dispatch')
class Logoutformview(LogoutView):
    template_name = 'register.html'
    next_page = reverse_lazy('homepage')


@login_required
def Profileview(request):
    return render(request,'profile.html')

@login_required
def AddPost(request):
    if request.method == 'POST':
        form = PostForm(request.POST, request.FILES)
        if form.is_valid():
            post = form.save(commit=False) 
            post.author = request.user
            post.save()
            return redirect('addpostpage')
    else:
        form = PostForm()
    return render(request, 'addspost.html', {'form': form})


class DetailPage(DetailView):
    model = PostModel
    pk_url_kwarg = 'id'
    template_name = 'detials.html'
    context_object_name = 'usersite'



@login_required
def DepositeView(request):
    user_account = request.user.account
    print(user_account)
    
    if request.method == 'POST':
        form =UserProfileForm(request.POST)
        
        if form.is_valid():
            deposite_amount = form.cleaned_data['amount']
            user_account.amount += deposite_amount
            user_account.save()
            return redirect('depositepage')
        
    else:
        form = UserProfileForm()
    return render(request, 'deposit.html', {'form': form})





    

@login_required
def borrow_book(request, id):
    book = PostModel.objects.get(pk=id)
    user_profile, created = BorrowHistory.objects.get_or_create(user=request.user)

    if user_profile.account_balance >= book.browing_price:
        borrowed_amount = book.borrowing_price
        user_profile.account_balance -= borrowed_amount
        user_profile.save()

        borrow_history = BorrowHistory(
            user=request.user,
            book=book,
            borrow_time=timezone.now(),
            borrowed_amount=borrowed_amount
        )
        borrow_history.save()
        print(borrow_book)

        messages.success(request, f'Book "{book.title}" borrowed successfully.')
    else:
        messages.error(request, 'Not enough funds to borrow this book.')

    return render(request, 'detials.html', {'usersite': book, 'borrow_history': borrow_history})
