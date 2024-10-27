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
        return
        
            
    def book_seats(self, id):
        if id not in self.seats:
            print("Your id: {id} is not exist!")
            
        for row, col in self.seats:
            if(row < 0 or row > self.rows or col< 0 or col > self.cols or self.seats[id][row][col] !="Free"):
                print(f"row {row} and colum {col} is already booked!")
            else:
                self.seats[id][row][col] = "booked"
                print(f"row{row} and colum {col} seats successfully booked")
    
    
    def view_show_list(self):
        print("Today all running show: ")
        for  movie_info in self.show_list:
            id, movie_name, time = movie_info
            
            print(f"Show id: {id}, {movie_name}, {time}")
            
 
        
banani_hall = Hall(rows=10,cols=20, hall_no=101)
new_hall = Hall(rows=10,cols=10,hall_no=201) 
raj_hall = Hall(rows=12,cols=12,hall_no=301)


metro_hall = Star_Cinema.hall_list

for hall in metro_hall:
     print(f"Hall No: {hall.hall_no}, Rows: {hall.rows}, Columns: {hall.cols}")
    
banani_hall.entry_show(id=1,movie_name="jawan",time="12.10 pm")
banani_hall.entry_show(id=2, movie_name="Leo",time="3.30 pm")
banani_hall.entry_show(id=3, movie_name="Iron man", time="5.30 pm")
print(banani_hall.show_list)

banani_hall.view_show_list()


# print(f"Seat at Row {row}, Col {col} is already booked or invalid.")


