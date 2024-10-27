class Account:
    
    def __init__(self, name, email, address, account_type,balance = 0) -> None:
        self.name = name
        self.email = email
        self.address = address
        self.account_type = account_type
        self.balance = 0
          
        
        
class User(Account):
    auto_account_num = 10**5
    
    def __init__(self, name, email, address, account_type, balance=0) -> None:
        self.account_number = User.auto_account_num
        User.auto_account_num += 1
        self.transaction_history = []
        self.all_account_number = []
        
        self.count_loan = 0
        super().__init__(name, email, address, account_type,balance)
    
    def Generate_account_num(self):
        account = self.account_number
        self.all_account_number.append(account)
        return account
        
        
    def Deposit(self,account_num, amount):
        for i in self.all_account_number:
            if amount > 0 and account_num == i:
                self.balance += amount
                self.transaction_history.append(f"Deposit: {amount} taka")
                print(f"Deposit {amount} Taka and New Balance: {self.balance} Taka.")
            else:
                print("Invalid balance!")
            
    def Withdrow(self,account_num, amount):
        for i in self.all_account_number:
            if amount > self.balance and account_num == i:
                print("What you want to withdraw is more than your account balance.")
            elif amount < self.balance:
                self.balance -= amount
                self.transaction_history.append(f"Withdraw: {amount} taka")
                print(f"You withdrew {amount} taka and available balance {self.balance} taka.")
            else:
                print("Your amount and balance are equal.")
        
    def Check_available_balance(self):
        print(f"Wallet balance: {self.balance}")
        
    def Check_Transaction_history(self):
        for transaction in self.transaction_history:
            print(transaction)
        
    def Take_loan(self, acc_number, amount):
        if self.count_loan < 2 and amount > 0 and acc_number == self.account_number:
            self.balance += amount
            self.transaction_history.append(f"Account number: {account_number} Loan balance: {amount} taka")
            self.count_loan += 1
            print("Your loan is successful.")
        else:
            print("You cannot take more than 2 loans.")
    
    def Transfer_amount(self, recipient, amount):
        if amount > 0 and self.balance >= amount:
            self.balance -= amount
            self.transaction_history.append(f"Transaction to another account: {amount} taka.")
            recipient.balance += amount
            self.transaction_history.append(f"Received: {amount} taka.")
        else:
            print("Invalid balance!")


class Admin(User):
    
    def __init__(self) -> None:
        self.all_account_list = []
        
    def create_account(self, name, email, address, account_type):
        user = User(name, email, address, account_type)
        self.all_account_list.append(user)
        print(f"Account created successfully. Account number: {user.account_number}")
        
    def Delete_account(self, account_num):
        for account in list(self.all_account_list):  # Iterate over a copy of the list
            if account.account_number == account_num:
                self.all_account_list.remove(account)
                print(f"Your account {account_num} has been successfully removed.")
                break
        else:
            print("Invalid account number!")
        
    def See_all_user(self):
        for user in self.all_account_list:
            print(user.name, user.email, user.address, user.account_type)
        
    def total_balance_of_bank(self):
        total_balance = sum(account.balance for account in self.all_account_list)
        print(f"Bank available balance: {total_balance}")
    
    def total_loan_amount(self):
        total_loan = sum(account.balance for account in self.all_account_list if account.count_loan > 0)
        print(f"Total loan amount: {total_loan}")
            
    def Loan_futures(self, current_status=True):
        User.Take_loan = current_status
        if current_status:
            current_status = False

adminer = Admin()

while True:
    print("Options:")
    print("1. User site")
    print("2. Admin site")
    print("3. Exit")

    choice = input("Enter your choice: ")
    
    if choice == "1":
        print("User Options:")
        print("1. Deposit money")
        print("2. Withdraw money")
        print("3. Check wallet balance")
        print("4. Check transaction history")
        print("5. Take a loan")
        print("6. Transfer amount")
        print("7. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == "1":
            account_id = int(input("Enter your account number: "))
            amount = int(input("Enter the amount: "))
        
            if 0 < account_id <= len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Deposit(amount)
            else:
                print("Invalid account!")
        
        elif choice == "2":
            account_id = int(input("Enter your account number: "))
            amount = int(input("Enter the amount: "))
        
            if 0 < account_id <= len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Withdrow(amount)
            else:
                print("Invalid account!")
                
        elif choice == "3":
            account_id = int(input("Enter your account number: "))
            
            if 0 < account_id <= len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Check_available_balance()
            else:
                print("Invalid account!")
                
        elif choice == "4":
            account_id = int(input("Enter your account number: "))
        
            if 0 < account_id <= len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Check_Transaction_history()
            else:
                print("Invalid account!")
            
        elif choice == "5":
            account_id = int(input("Enter your account number: "))
            amount = int(input("Enter the loan amount: "))
        
            if 0 < account_id <= len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Take_loan(amount, True)
            else:
                print("Invalid account!")
                
        elif choice == "6":
            account_id = int(input("Enter your account number: "))
            transfer_id = int(input("Enter the recipient's account number: "))
            amount = int(input("Enter the amount: "))
            
            if 0 < account_id <= len(adminer.all_account_list) and 0 < transfer_id <= len(adminer.all_account_list):
                adminer.all_account_list[account_id - 1].Transfer_amount(adminer.all_account_list[transfer_id - 1], amount)
            else:
                print("Invalid account!")
            
        elif choice == "7":
            break
  
    elif choice == "2":
        print("Admin Options:")
        print("1. Create account")
        print("2. Delete account")
        print("3. See all Users")
        print("4. Total balance of the bank")
        print("5. Total loan amount")
        print("6. Loan futures")
        print("7. Exit")
        
        choice = input("Enter your choice: ")
        
        if choice == "1":
            name = input("Enter the name: ")
            email = input("Enter the email: ")
            address = input("Enter the address: ")
            account_type = input("Enter the account type: ")
            adminer.create_account(name, email, address, account_type)
            
        elif choice == "2":
            account_number = int(input("Enter the account number: "))
            adminer.Delete_account(account_number)
            
        elif choice == "3":
            adminer.See_all_user()
            
        elif choice == "4":
            adminer.total_balance_of_bank()
            
        elif choice == "5":
            adminer.total_loan_amount()
            
        elif choice == "6":
            account_id = int(input("Enter your account number: "))
            adminer.Loan_futures()
            
        elif choice == "7":
            break

    else:
        break
