import math
class Person:
    def __init__(self, name, age, height) -> None:
        self.name = name
        self.age = age
        self.height = height
        
    def eat(self):
        print("I like Biraniy")
    
    def Excrices(self):
        print("Every day excrices is very good habit.")
        
class Cricketer(Person):
    def __init__(self, name, age, height, team) -> None:
        self.team = team
        super().__init__(name, age, height)
    
    # this is override of function
    
    def eat(self):
        print("Cricketer like healthy food")
        
    def Excrices(self):
        print("Every cricketers needs to excrices everyday. ")
        
    # overload function
    
    def __add__(self, other):
        return self.age + other.age
    
    def __mul__(self,other):
        return self.age * other.age
        
        
Sakib = Cricketer("Sakib",37,5.9,"Tiger")
mushi = Cricketer("Mushi",37,5.7,"Tiger")
# Sakib.eat()
# Sakib.Excrices()

print(Sakib + mushi)
print(Sakib * mushi)


