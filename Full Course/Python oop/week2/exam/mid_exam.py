class Star_Cinema:
    hall_list = []

    def entry_hall(self,hall):
        self.hall_list.append(hall)
    
class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        super().__init__()
        self._seats = {}
        self._show_list = []
        self._rows = rows
        self._cols = cols
        self._hall_no = hall_no
        Star_Cinema.hall_list.append(self)
        
    def entry_show(self,id, movie_name,time):
        show_detils = (id, movie_name,time)
        self._show_list.append(show_detils)
        self. _seats[id] = [["Free" for i in range(self._cols)] for j in range(self._rows)]
        
            
    def book_seats(self, id,seat_list):
        if id not in self._seats:
            print("Your show id: {id} is not exist!")
            
        for row, col in seat_list:
            if(row < 0 or row >= self._rows or col< 0 or col >= self._cols):
                return(f"row {row} and colum {col} is invalid!")
            elif self._seats[id][row][col] !="Free":
                return(f"row {row}-colum{col} is already booked!")
            else:
                self._seats[id][row][col] = "booked"
                return(f"row {row} and colum {col} seats successfully booked")
        
    
    def view_show_list(self):
        print("running show: ", self._hall_no)
        for  i in self._show_list:
            id, movie_name, time = i
            print(f"Show info: {id}, {movie_name}, {time}")
            
            
    def view_available_seats(self,id):
        if id in self._seats:
            (f"Available seats for show id: {id} in hall no->{self._hall_no} ")
            
            for row in range(self._rows):
                for col in range(self._cols):
                    if self._seats[id][row][col] == "Free":
                        print("0",end=" ")
                    else:
                        print("1",end=" ")
                print( )
        else:
            print(f"show id {id} and {self._hall_no} dose not exist")




  
banani_hall = Hall(rows=5,cols=4, hall_no=101)
new_hall = Hall(rows=3,cols=5,hall_no=201) 


metro_hall = Star_Cinema.hall_list

for hall in metro_hall:
    print(f"Hall No: {hall._hall_no}, Rows: {hall._rows}, Columns: {hall._cols}")
    
    
    
banani_hall.entry_show(id=1,movie_name="jawan",time="12.10 pm")
banani_hall.entry_show(id=2, movie_name="Leo",time="3.30 pm")
new_hall.entry_show(id= 3, movie_name="Sujon Mazi", time="10.00 am")




                       

while True:
    print("Option: ")
    print("1. View running show: ")
    print("2. View available seat in show: ")
    print("3. Book tickets: ")
    print("4. Exit")
    
    choice = input("Enter your choice: ")
    
    if (choice == "1"):
        banani_hall.view_show_list()
        new_hall.view_show_list()
        
    elif(choice == "2"):
        hall_number = int(input("Enter your Hall id: "))
        show_id = int(input("Enter your show id: "))
        banani_hall.view_available_seats(show_id)
        new_hall.view_available_seats(show_id)
        
    elif(choice == "3"):
        hall_number = int(input("Enter your Hall Number: "))
        hall_id = int(input("Enter your id: "))
        seat_number = [list(map(int,input("Enter your row and colum: ").split()))]
        banani_hall.book_seats(hall_id, seat_number)
        
    elif(choice == "4"):
        break
    else:
        print("Invalid option!")
 