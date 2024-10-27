
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
        print(f"Wallet balance: {self.balance}")
        
    def Check_Transaction_history(self):
        for transaction in self.transaction_histoy:
            print(transaction)
        
    def Take_loan(self, amount, loan_status = True):
        
        if self.count_loan < 2 and amount > 0:
            self.balance += amount
            self.transaction_histoy.append(f"Loan balance: {amount} taka")
            self.count_loan += 1
            print("Your loan is successfull.")
        
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
        total_loan = sum(account.balance for account in self.all_account_list if account.loan_count > 0)
        print(f"Total loan amount: {total_loan}")
            
    
    
    def Loan_futures(self, current_stauts = True):
        User.Take_loan = current_stauts
        if current_stauts == True:
            current_stauts = False
            
        
        
        
        

adminer = Admin()

while(True):
    print("Option: ")
    print("1. User site: ")
    print("2. Admin site: ")
    print("3. Exit")

    choice = input("Enter your choice: ")
    
    if (choice == "1"):
        print("User Option: ")
        print("1. Deposit money: ")
        print("2. Withdraw money: ")
        print("3. Check wallet balance: ")
        print("4. Check transaction history: ")
        print("5. Take loan: ")
        print("6. Transfer amount: ")
        print("7. Exit")
        
        choice = input("Enter your choice: ")
        
        if(choice == "1"):
            account_id = int(input("Ener your account number: "))
            amount = int(input("Ener your amount: "))
        
            if 0 < account_id and account_id == len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Deposit(amount)
            else:
                print("Invalid account!")
        
        elif(choice == "2"):
            account_id = int(input("Ener your account number: "))
            amount = int(input("Ener your amount: "))
        
            if 0 < account_id and account_id == len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Withdrow(amount)
            else:
                print("Invalid account!")
                
        
        elif(choice == "3"):
            account_id = int(input("Ener your account number: "))
            
            if 0 < account_id and account_id == len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Check_available_balance()
            else:
                print("Invalid account!")
                
                
        elif(choice =="4"):
            
            account_id = int(input("Ener your account number: "))
        
            if 0 < account_id and account_id == len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Check_Transaction_history()
            else:
                print("Invalid account!")
            
            
        elif(choice =="5"):
            account_id = int(input("Enter your account number: "))
            amount = int(input("Ener your account number: "))
        
            if 0 < account_id and account_id == len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Take_loan(amount, True)
            else:
                print("Invalid account!")
                
                
        elif(choice == "6"):
            account_id = int(input("Enter your account number: "))
            transfer_id = int(input("Ener your transfer account number: "))
            amount = int(input("Enter your amount: "))
            
            if 0 < account_id and account_id == len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Take_loan(transfer_id, amount)
            else:
                print("Invalid account!")
            
            
        elif(choice == "7"):
            break
  
    
    elif(choice == "2"):
        print("Admin Option: ")
        print("1. Create account: ")
        print("2. Delete account: ")
        print("3. See all User: ")
        print("4. Total balance of bank: ")
        print("5. Total balance of loan amount: ")
        print("6. Loan futures : ")
        print("7. Exit")
        
        choice = input("Enter your choice: ")
        
        if(choice == "1"):
            name = input("Enter your name: ")
            email = input("Enter your email: ")
            address = input("Enter your adress: ")
            account_type = input("Enter your account type: ")
            adminer.create_account(name, email, address, account_type)
            
        elif (choice == "2"):
            account_number = int(input("enter your account number: "))
            adminer.Delete_account(account_number)
            
        elif (choice == "3"):
            adminer.See_all_user()
            
        elif (choice == "4"):
            adminer.total_balance_of_bank()
            
        elif (choice == "5"):
            adminer.total_loan_amount()
            
        elif (choice == "6"):
            account_id = int(input("Enter your account number: "))
            adminer.Loan_futures()
            
        elif (choice == "7"):
            break
 
    else:
        break
        
    