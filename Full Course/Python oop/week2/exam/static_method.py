class Shopping:
    cart = []  #class attribute or # static attributes
    origin = "china"
    
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price
        
        
    def perches (self, amount):
        return self.price - amount
    
    @staticmethod
    def multiply(a,b):
        multi = a*b
        print(multi)
        
    @classmethod
    def Produce(self, item):
        print("This is new item name: ",item)
        
        
dhaka = Shopping("T'shart",1000)

print(dhaka.perches(600))
Shopping.multiply(50,50)
Shopping.Produce("Shart")