class Bank:
    def __init__(self,name,surname, balance) -> None:
        self.name = name
        self._surname ="ahammed"
        self._balance = balance
        
    def deposite(self, amount):
        self._balance += amount
        
    def get_balance(self):
        return self._balance
    
    def withdrow(self, amount):
        if amount < self._balance:
            return self._balance - amount
        else:
            print("Insufficent balance in your account: ",self._balance)
        
        
ific = Bank("Ashik","Rolex",10000)
print(ific.name,ific._surname,ific._balance)


ific.deposite(10000)
ific.withdrow(2100)

print(ific.get_balance())

        