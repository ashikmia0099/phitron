from abc import ABC, abstractmethod
class Animal(ABC):
    @abstractmethod
    def eat(self):
        print("Monkey eating bannana!")
    @abstractmethod
    def move(self):
        pass
    
class monkey(Animal):
    def __init__(self,name) -> None:
        self.name = name
        self.catagory = "Monkey"
        super().__init__()
    
    def eat(self):
        print("Money like bannana!")
        
    def move(self):
        print("Monkey lives in zoo!")
        
locky = monkey("Rolex")

locky.eat(), locky.move()
