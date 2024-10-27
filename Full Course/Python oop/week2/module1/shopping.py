class Shopping:
    def __init__(self, name):
        self.custormer_name = name
        self.cart = []
        
    def add_to_cart(self, item, price, quantity):
        product = {"item": item, "price": price, "quantity": quantity}
        self.cart.append(product)
        
        
    def checkout(self, amount):
        print("Your account current balance : ",amount,"taka")
        total = 0
        for item in self.cart:
            total += item['price'] * item["quantity"]
        print("Your items Total price: ", total,"taka")
        if total > amount:
            print(f'I will get you: {total - amount} tk')
        elif total == amount:
            print("Thank you Very mutch, will come again")
        else:
            extra = amount - total
            print(f"Here is your items and extra money: {extra} tk")
            
            
            
        
        
Rifat = Shopping("Rifat")
Rifat.add_to_cart("Potato", 50, 6 )
Rifat.checkout(200)
print(Rifat.cart)

rony = Shopping("Rony")
rony.add_to_cart("Bannana", 12, 10)
print(rony.cart)

        