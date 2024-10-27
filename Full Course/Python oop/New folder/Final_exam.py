class Account:
    accouonts =[]
    
    def __init__(self, name, email, address, account_type):
        self.name = name
        self.email = email
        self.address = address
        self.accountNum = len(Account.accouonts)+1
        self.account_type = account_type
        self.balance = 0
        self.transaction_histoy = []
        self.Loan_count = 0
 
 
    def Deposit (self, amount):
        if (amount > 0):
            self.balance += amount
            self.transaction_histoy.append(f"Deposite: {amount} taka")
            print(f"Deposit {amount} Taka and New Balance: {self.balance} Taka.")
        else:
            print("Invalid balance!")
            
    def Withdrow(self, amount):
        if (amount <= self.balance):
            self.balance -= amount
            self.transaction_histoy.append(f"withdrow: {amount} taka")
            print(f"You withdrow {amount} taka and available balance {self.balance} taka.")
        else:
            print("What you want to withdraw is more than your account balance.")
            
        

    def Check_available_balance(self):
        print(f"Wallet balance: {self.balance}")
        
    def Check_Transaction_history(self):
        for transaction in self.transaction_histoy:
            print(transaction)
    
    def Take_loan(self, amount):
        if self.Loan_count < 2 and amount > 0:
            self.balance += amount
            self.transaction_histoy.append(f"Loan balance: {amount} taka")
            self.Loan_count += 1
            print(f"Your loan is successfull and {amount}.")
        
        else:
            print("You cannot take more then 2 loans.")
    
    
    def Transfer_amount(self, recipent, amount):
        if (amount > 0 and self.balance >= amount):
            self.balance -= amount
            self.transaction_histoy.append(f"transaction anather account: {amount} taka.")
            recipent.balance += amount
            self.transaction_histoy.append(f"Recived: {amount} taka.")
            
        else:
            print(f"Invalid balance!")


class User(Account):
    loan_count = 0
    
    def __init__(self, name, email, address, account_type) -> None:
        super().__init__(name, email, address, account_type)
        
        
    def all_Info(self):
            print(f"Name: {self.name}")
            print(f"email: {self.email}")
            print(f"address: {self.address}")
            print(f"accountNo: {self.accountNum}")
            print(f"account type: {self.account_type}")
            print(f"current balance: {self.balance}")
            print("\n")
        
class Admin(Account):
    
    def __init__(self, name, email, address, account_type) -> None:
        super().__init__(name, email, address, account_type)
        
    
    def create_account(self, name, email, address, account_type):
        user =  User(name, email, address, account_type)
        Account.accouonts.append(user)
        print(f"Account created successfully Account number: {user.accountNum}")
        
    def Delete_account(self, account_num):
        for user in Account.accouonts:
            if user.accountNum == account_num:
                Account.accouonts.remove(user)
                print(f"Your account {account_num} has successfully removed.")
                
            else:
                print("Invalid account number!")
                
        
    def See_all_user(self):
        for user in Account.accouonts :
            user.all_Info()

        

    def total_balance_of_bank(self):
        total_balance = sum(user.balance for user in Account.accouonts)
        print(f"Bank available_blance: {total_balance}")
        
    
    def total_loan_amount(self):
        total_loan = sum(user.balance for user in Account.accouonts if user.balance > 0)
        print(f"Total loan amount: {total_loan}")
            
    
    
    def Loan_futures(self,status):
        if status:
            User.loan_count = 0
            print("loan futures now enablde")
        else:
            print("loan futures now disabled")
            

admin = Admin("Ashik", "Ashik@gmail.com","Dhaka","Saving")




    
while(True):
    print("Option: ")
    print("1. User site: ")
    print("2. Admin site: ")
    print("3. Exit")
    option = input("Enter your choice: ")
    
    if (option == "1"):
        account_num = int(input("Enter your account_number: "))
        user = None
        for account in Account.accouonts:
            if account.accountNum == account_num:
                user = account
                break
        while user:
            print("User Option: ")
            print("1. Deposit money: ")
            print("2. Withdraw money: ")
            print("3. wallet balance: ")
            print("4. transaction history: ")
            print("5. Take loan: ")
            print("6. Transfer amount: ")
            print("7. Logout")
            
            choice = input("Enter your option: ")
            
            if(choice == "1"):   
                amount = int(input("Enter amount: "))
                user.Deposit(amount)
            
            elif(choice == "2"):
                amount = int(input("Enter amount: "))
                user.Withdrow(amount)
                    
            
            elif(choice == "3"):
               user.Check_available_balance()
                  
            elif(choice =="4"):
                user.Check_Transaction_history()
                
            elif(choice =="5"):
                amount = int(input("Enter your loan amount: "))
                user.Take_loan(amount)
                    
                    
            elif(choice == "6"):
                amount = int(input("amount: "))
                recived_account = int(input("account number: "))
                recived = None
                for account in Account.accouonts:
                    if account.accountNum == recived_account:
                        recived = account
                        break
                if recived is not None:
                    user.Transfer_amount(recived,amount)
                else:
                    print("This account not found!")
            
            elif(choice == "7"):
                break
            
            else:
                print("invalid account!")
    
        
    elif(option == "2"):
        
        name = input("Enter name: ")
        email = input("Enter email: ")
        password = int(input("Enter password: "))
        
        if name == "Ashik" and email == "ashik@gmail.com" and password == 12345:
            while True:
                
                print("Admin Option: ")
                print("1. Create account: ")
                print("2. Delete account: ")
                print("3. See all User: ")
                print("4. Total balance of bank: ")
                print("5. Total balance of loan amount: ")
                print("6. Loan futures : ")
                print("7: Logout ")
                
                choice = input("Enter your choice: ")
                
                if(choice == "1"):
                    name = input("Enter your name: ")
                    email = input("Enter your email: ")
                    address = input("Enter your adress: ")
                    account_type = input("Enter your account type( Savings/Cuurent): ")
                    admin.create_account(name, email, address, account_type)
                    
                elif (choice == "2"):
                    account_number = int(input("enter your account number: "))
                    admin.Delete_account(account_number)
                    
                elif (choice == "3"):
                    admin.See_all_user()
                    
                elif (choice == "4"):
                    admin.total_balance_of_bank()
                    
                elif (choice == "5"):
                    admin.total_loan_amount()
                    
                elif (choice == "6"):
                    status = input("bank loan status (on/off): ")
                    if status.lower() == "on":
                        admin.Loan_futures(True)
                    elif status.lower() == "off":
                        admin.Loan_futures(False)
                    else:
                        print("invalid option!")
                    
                    
                elif (choice == "7"):
                    break
                
                else:
                    print("invalid option!")

        else:
            print("invalid option!")
            
    elif (option == "3"):
        break
           
    else:
        print("Invalid input")
        continue