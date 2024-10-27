# # from abc import ABC, abstractmethod

# # class Account(ABC):
# #     accounts = []

# #     def __init__(self, name, email, address, accountType):
# #         self.name = name
# #         self.email = email
# #         self.address = address
# #         self.accountNo = len(Account.accounts) + 1
# #         self.balance = 0
# #         self.accountType = accountType
# #         self.transactions = []


# #     def deposit(self, amount):
# #         if amount > 0:
# #             self.balance += amount
# #             self.transactions.append(f"Deposited ${amount}")
# #             print(f"Deposited ${amount}. New balance: ${self.balance}")
# #         else:
# #             print("Invalid deposit amount")

# #     def withdraw(self, amount):
# #         if amount > 0 and amount <= self.balance:
# #             self.balance -= amount
# #             self.transactions.append(f"Withdrew ${amount}")
# #             print(f"Withdrew ${amount}. New balance: ${self.balance}")
# #         elif amount > self.balance:
# #             print("Withdrawal amount exceeded")
# #         else:
# #             print("Invalid withdrawal amount")

# #     def check_balance(self):
# #         print(f"Current balance: ${self.balance}")

# #     def check_transaction_history(self):
# #         for transaction in self.transactions:
# #             print(transaction)

# # class User(Account):
# #     loans_taken = 0

# #     def __init__(self, name, email, address, accountType):
# #         super().__init__(name, email, address, accountType)

# #     def take_loan(self, amount):
# #         if User.loans_taken < 2 and amount > 0 and self.balance >= amount:
# #             User.loans_taken += 1
# #             self.balance -= amount
# #             self.transactions.append(f"Loan Taken: ${amount}")
# #             print(f"Loan of ${amount} taken successfully.")
# #         elif User.loans_taken >= 2:
# #             print("You can't take more loans. You have reached the maximum limit.")
# #         elif amount <= 0:
# #             print("Invalid loan amount")
# #         else:
# #             print("Insufficient balance to take a loan")

# #     def transfer(self, recipient, amount):
# #         if recipient is not None:
# #             if amount > 0 and self.balance >= amount:
# #                 self.balance -= amount
# #                 recipient.balance += amount
# #                 self.transactions.append(f"Transferred ${amount} to Account {recipient.accountNo}")
# #                 recipient.transactions.append(f"Received ${amount} from Account {self.accountNo}")
# #                 print(f"Transferred ${amount} to Account {recipient.accountNo}")
# #             elif amount <= 0:
# #                 print("Invalid transfer amount")
# #             else:
# #                 print("Insufficient balance for the transfer")
# #         else:
# #             print("Account does not exist")

# #     def showInfo(self):
# #         print(f"User Information:\n")
# #         print(f"Name: {self.name}")
# #         print(f"Email: {self.email}")
# #         print(f"Address: {self.address}")
# #         print(f"Account Number: {self.accountNo}")
# #         print(f"Account Type: {self.accountType}")
# #         print(f"Current Balance: ${self.balance}\n")

# # class Admin(Account):

# #     def __init__(self, name, email, address):
# #         super().__init__(name, email, address, "admin")

# #     def create_account(self, name, email, address, accountType):
# #         user = User(name, email, address, accountType)
# #         Account.accounts.append(user)
# #         print(f"Account created successfully. Account Number: {user.accountNo}")

# #     def delete_account(self, account_number):
# #         for user in Account.accounts:
# #             if user.accountNo == account_number:
# #                 Account.accounts.remove(user)
# #                 print(f"Account {account_number} deleted successfully")
# #                 return
# #         print("Account does not exist")

# #     def see_all_accounts(self):
# #         print("List of all user accounts:")
# #         for user in Account.accounts:
# #             user.showInfo()

# #     def check_total_balance(self):
# #         total_balance = sum(user.balance for user in Account.accounts)
# #         print(f"Total available balance in the bank: ${total_balance}")

# #     def check_total_loans(self):
# #         total_loans = sum(user.balance for user in Account.accounts if user.balance < 0)
# #         print(f"Total loan amount in the bank: ${-total_loans}")

# #     def toggle_loan_feature(self, status):
# #         if status:
# #             User.loans_taken = 0
# #             print("Loan feature is now enabled.")
# #         else:
# #             print("Loan feature is now disabled.")

# # # Main program

# # admin = Admin("Admin", "admin@example.com", "Admin Address")

# # while True:
# #     print("\nWelcome to the Bank Management System")
# #     print("1. User Login")
# #     print("2. Admin Login")
# #     print("3. Exit")

# #     choice = input("Select an option: ")

# #     if choice == '1':
# #         account_number = int(input("Enter your account number: "))
# #         user = None
# #         for account in Account.accounts:
# #             if account.accountNo == account_number:
# #                 user = account
# #                 break
# #         if user:
# #             while True:
# #                 print(f"\nWelcome, {user.name}!")
# #                 print("1. Withdraw")
# #                 print("2. Deposit")
# #                 print("3. Check Balance")
# #                 print("4. Transaction History")
# #                 print("5. Take Loan")
# #                 print("6. Transfer Money")
# #                 print("7. Logout")

# #                 option = input("Select an option: ")

# #                 if option == '1':
# #                     amount = float(input("Enter withdrawal amount: "))
# #                     user.withdraw(amount)
# #                 elif option == '2':
# #                     amount = float(input("Enter deposit amount: "))
# #                     user.deposit(amount)
# #                 elif option == '3':
# #                     user.check_balance()
# #                 elif option == '4':
# #                     user.check_transaction_history()
# #                 elif option == '5':
# #                     amount = float(input("Enter loan amount: "))
# #                     user.take_loan(amount)
# #                 elif option == '6':
# #                     recipient_account = int(input("Enter recipient account number: "))
# #                     recipient = None
# #                     for account in Account.accounts:
# #                         if account.accountNo == recipient_account:
# #                             recipient = account
# #                             break
# #                     user.transfer(recipient, float(input("Enter transfer amount: ")))
# #                 elif option == '7':
# #                     break
# #                 else:
# #                     print("Invalid option")

# #         else:
# #             print("Account not found!")

# #     elif choice == '2':
# #         print("\nAdmin Login")
# #         admin_name = input("Admin Name: ")
# #         admin_pass = input("Admin Password: ")

# #         if admin_name == "Admin" and admin_pass == "admin123":
# #             while True:
# #                 print("\nWelcome, Admin!")
# #                 print("1. Create Account")
# #                 print("2. Delete Account")
# #                 print("3. See All User Accounts")
# #                 print("4. Check Total Balance")
# #                 print("5. Check Total Loans")
# #                 print("6. Toggle Loan Feature")
# #                 print("7. Logout")

# #                 option = input("Select an option: ")

# #                 if option == '1':
# #                     name = input("User Name: ")
# #                     email = input("User Email: ")
# #                     address = input("User Address: ")
# #                     account_type = input("Account Type (savings/special): ")
# #                     admin.create_account(name, email, address, account_type)
# #                 elif option == '2':
# #                     account_number = int(input("Enter account number to delete: "))
# #                     admin.delete_account(account_number)
# #                 elif option == '3':
# #                     admin.see_all_accounts()
# #                 elif option == '4':
# #                     admin.check_total_balance()
# #                 elif option == '5':
# #                     admin.check_total_loans()
# #                 elif option == '6':
# #                     status = input("Toggle Loan Feature (on/off): ")
# #                     if status.lower() == 'on':
# #                         admin.toggle_loan_feature(True)
# #                     elif status.lower() == 'off':
# #                         admin.toggle_loan_feature(False)
# #                     else:
# #                         print("Invalid option")
# #                 elif option == '7':
# #                     break
# #                 else:
# #                     print("Invalid option")

# #         else:
# #             print("Admin credentials are incorrect!")

# #     elif choice == '3':
# #         print("Goodbye!")
# #         break

# #     else:
# #         print("Invalid option")


# from abc import ABC, abstractmethod

# class Account(ABC):
#     accounts = []
#     account_num = 1  # Initialize the account number counter

#     def __init__(self, name, email, address, account_type):
#         self.name = name
#         self.email = email
#         self.address = address
#         self.accountNum = Account.account_num  # Assign the account number
#         Account.account_num += 1  # Increment the account number for the next account
#         self.account_type = account_type
#         self.balance = 0
#         self.transaction_history = []
#         self.loan_count = 0

#     def Deposit(self, amount):
#         if amount > 0:
#             self.balance += amount
#             self.transaction_history.append(f"Deposit: {amount} Taka")
#             print(f"Deposit {amount} Taka and New Balance: {self.balance} Taka.")
#         else:
#             print("Invalid balance!")

#     # Rest of your methods...

# class User(Account):
#     def __init__(self, name, email, address, account_type):
#         super().__init__(name, email, address, account_type)

#     def showinfo(self):
#         print(f"Name: {self.name}")
#         print(f"Email: {self.email}")
#         print(f"Address: {self.address}")
#         print(f"Account Number: {self.accountNum}")
#         print(f"Account Type: {self.account_type}")
#         print(f"Current Balance: {self.balance}")
#         print("\n")

# class Admin(Account):
#     def create_account(self, name, email, address, account_type):
#         user = User(name, email, address, account_type)
#         Account.accounts.append(user)
#         print(f"Account created successfully. Account number: {user.accountNum}")

#     # Rest of your Admin methods...

# # Example usage:
# admin = Admin("Ashik", "Ashik@gmail.com", "Dhaka", "Saving")
# admin.create_account("Ahik", "dhaka", "nar", "sav")
# admin.create_account("Rrr", "ronha", "dhak", "savb")

# # Show information for each user created
# for user in Account.accounts:
#     user.showinfo()


