
class Star_Cinema:
    hall_list = []
    
    
class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        super().__init__()
        self.seats = {}
        self.show_list = ()
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        Star_Cinema.hall_list.append(self)
        
    def entry_show(self,id, movie_name,time):
        
        Movie_info = (id, movie_name,time)
        self.show_list = self.show_list +(Movie_info,)
        self.seats[id] = [["Free" for i in range(self.rows)] for j in range(self.cols)]
        
            
    def book_seats(self, id):
        if id is not self.seats:
            print("Your id: {id} is not exist!")
            
        for row, col in self.seats:
            if(row < 0 or row > self.rows or col< 0 or col > self.cols or self.seats[id][self.rows][self.cols] !="Free"):
                print(f"row {row} and colum {col} is already booked!")
            else:
                self.seats[id][row][col] = "booked"
                print(f"row{row} and colum {col} seats successfully booked")
                
                                                                                                     
            
    
        
banani_hall = Hall(rows=10,cols=20, hall_no=1)
metro_hall = Star_Cinema.hall_list

for hall in metro_hall:
     print(f"Hall No: {hall.hall_no}, Rows: {hall.rows}, Columns: {hall.cols}")
    
banani_hall.entry_show(id=1,movie_name="Jawan",time="12.10 PM")
print(banani_hall.show_list)


    