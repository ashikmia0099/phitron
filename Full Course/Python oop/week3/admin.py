from abc import ABC, abstractmethod
class Account:
    
    def __init__(self,name, email, address, account_type) -> None:
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type
          
        
        
class User(Account):
    auto_account_num = 10**5
    def __init__(self, name, email, address, account_types, balance = 0) -> None:
        self.balance = balance
        self.account_number = User.auto_account_num
        User.auto_account_num += 1
        self.transaction_histoy = []
        self.count_loan = 0
        super().__init__(name, email, address, account_types)
        
    
    def Generate_account_num(self):
        return self.account_number
        
        
    def Deposit (self, amount):
        if (amount > 0):
            self.balance += amount
            self.transaction_histoy.append(f"Deposite: {amount} taka")
            print(f"Deposit {amount} Taka and New Balance: {self.balance} Taka.")
        else:
            print("Invalid balance!")
            
    def Withdrow(self, amount):
        if (amount > self.balance):
            print("What you want to withdraw is more than your account balance.")
            
        elif(amount < self.balance):
            self.balance -= amount
            self.transaction_histoy.append(f"withdrow: {amount} taka")
            print(f"You withdrow {amount} taka and available balance {self.balance} taka.")
        
        else:
            print("Your amount and balance is equal.")
        
    def Check_available_balance(self):
        print(self.balance)
        
    def Check_Transaction_history(self):
        print(self.transaction_histoy)
        
    def Take_loan(self, amount):
        if self.count_loan < 2 and amount > 0:
            self.balance += amount
            self.transaction_histoy.append(f"Loan balance: {amount} taka")
            self.count_loan += 1
            print("Your loan is successfully.")
        
        else:
            print("You cannot take more then 2 loans.")
        
    def Count_loan(self):
        print(self.count_loan)
            
            
    def Transfer_amount(self, recipent, amount):
        if (amount > 0 and self.balance >= amount):
            self.balance -= amount
            self.transaction_histoy.append(f"transaction anather account: {amount} taka.")
            recipent.balance += amount
            self.transaction_histoy.append(f"Recived: {amount} taka.")
            
        else:
            print(f"Invalid balance!")


class Admin(User):
    
    def __init__(self) -> None:
        self.all_account_list = []
        
    
    def create_account(self, name, email, address, account_type):
        user = User(name, email, address, account_type)
        self.all_account_list.append(user)
        print(f"Account created successfully Account number: {user.account_number}")
        
    def Delete_account(self, account_num):
        for account in self.all_account_list:
            if account.account_number == account_num:
                self.all_account_list.remove(account)
                print(f"Your account {account_num} has successfully removed.")
            else:
                print("Invalid account number!")
                
        
    def See_all_user(self):
        for user in self.all_account_list:
            print(user.name,user.email, user.address, user.account_type)
        

    def total_balance_of_bank(self):
        total_balance = sum(account.balance for account in self.all_account_list)
        print(f"Bank available_blance: {total_balance}")
        
    
    def total_loan_amount(self):
        total_loan = sum(account.balance for account in self.all_account_list if account.loan > 0)
        print(f"Total loan amount: {total_loan}")
            
    
    
    
# user1 = User("Ashik","ashikmai5686@gmail.com","Dhaka,bangladesh","Saving Account",0)
# print(user1.Generate_account_num())
# user2 = User("Rohan","rohan@gmail.com","Narayangonj","saving",0)

# user1.Deposit(5000)
# user1.Deposit(2000)
# user1.Withdrow(1000)
# user1.Withdrow(8000)
# user1.Check_available_balance()
# user1.Check_Transaction_history()
# user1.Take_loan(50000)
# user1.Take_loan(2000)
# user1.Check_available_balance()
# user1.Check_Transaction_history()
# user1.Count_loan()
# user1.Take_loan(3000)

# user1.Transfer_amount(user2,500)
# user2.Check_available_balance()


employe1 = Admin()

# employe1.create_account("Ashik", "Ashik@gmil.com", "narayanjonj", "Current account")
# employe1.create_account("Rohan", "rohan@gmil.com", "Dhaka", "Savings account")
# employe1.create_account("Khan","Ashik@gmail.com","Dhaka","Saving account")
# employe1.See_all_user()
# employe1.Delete_account(100001)
# employe1.See_all_user()
# employe1.total_balance_of_bank()

employe1.create_account("Ashik", "Ashik@gmil.com", "narayanjonj", "Current account")
employe1.create_account("Rohan", "rohan@gmil.com", "Dhaka", "Savings account")
employe1.create_account("Khan","Ashik@gmail.com","Dhaka","Saving account")

employe1.all_account_list[0].Deposit(10000)
employe1.all_account_list[1].Deposit(20000)







