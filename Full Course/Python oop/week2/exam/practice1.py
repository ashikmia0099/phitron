class Shop:
    def __init__(self):
        self.products = []
    
    def add_product(self,product):
        self.products.append(product)
    
class Produce(Shop):
    def __init__(self):
        super().__init__()
        
        
    def buy_poduct(self, fruts):
        if fruts in self.products:
            print("Yes , this fruts have in my shop")
            
        else:
            print("This fruts is not in my shop")
            
    
shop = Shop()
shop.add_product("apple")
shop.add_product("bannana")
shop.add_product("junk fruts")
shop.add_product("liche")
shop.add_product("dragan fruts")
print(shop.products)

dokan = Produce()
dokan.add_product("Potato")
dokan.add_product("apple")
dokan.add_product("bannana")
dokan.add_product("junk fruts")
dokan.add_product("liche")
dokan.add_product("dragan fruts")


dokan.buy_poduct("Potat")




        
        