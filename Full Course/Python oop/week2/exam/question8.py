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
                print(f"row {row} and colum {col} is invalid!")
            elif self._seats[id][row][col] !="Free":
                print(f"row {row}-colum{col} is already booked!")
            else:
                self._seats[id][row][col] = "booked"
                print(f"row {row} and colum {col} seats successfully booked")
    
    
    def view_show_list(self):
        print("running show: ", self._hall_no)
        for  i in self._show_list:
            id, movie_name, time = i
            print(f"Show info: {id}, {movie_name}, {time}")
            
            
    def view_available_seats(self,id):
        if id in self._seats:
            print(f"Available seats for show id: {id} in hall no->{self._hall_no} ")
            
            for row in range(self._rows):
                for col in range(self._cols):
                    if self._seats[id][row][col] == "Free":
                        print(f"Seats of {row}-{col} have available")
        else:
            print(f"show id {id} and {self._hall_no} dose not exist")


class Replica_system:
    def __init__(self) -> None:
        self.halls = Star_Cinema.hall_list
    
    def count_view_show(self):
        running_show = []
        
        for hall in self.halls:
            show = hall.view_show_list()
            running_show.append(show)
        return running_show
        
    
    def available_seats(self,hall_num, id):
        
        for hall in self.halls:
            if hall._hall_no == hall_num:
                return hall.view_available_seats(id)
        return f"This Hall {hall_num} does not exist!"
                
    
    def book_ticket(self,hall_num, id, seat_list):
        
        if hall_num is None or id is None:
            print(f"This hall num {hall_num} and id {id} does not exist!")
            
        for hall in self.halls:
            return hall.book_seats(id, seat_list)
        





    
        
banani_hall = Hall(rows=5,cols=4, hall_no=101)
new_hall = Hall(rows=3,cols=5,hall_no=201) 


metro_hall = Star_Cinema.hall_list

for hall in metro_hall:
     print(f"Hall No: {hall._hall_no}, Rows: {hall._rows}, Columns: {hall._cols}")
    
banani_hall.entry_show(id=1,movie_name="jawan",time="12.10 pm")
banani_hall.entry_show(id=2, movie_name="Leo",time="3.30 pm")
new_hall.entry_show(id= 1, movie_name="Sujon Mazi", time="10.00 am")


print(banani_hall._show_list)
print(new_hall._show_list)

seat_book = ([0,0],[0,1])
booking_seat =([1,1],[1,2])
banani_hall.book_seats(1, seat_book)

new_hall.book_seats(1,booking_seat)
chair = ([0,0],[0,1])
banani_hall.book_seats(1,chair)
                       
banani_hall.view_available_seats(1)
new_hall.view_available_seats(1)



replica = Replica_system()

print(replica.count_view_show())

seat = ([2,2],[3,0],[2,1],[3,1])
replica.book_ticket(101,1,seat)

replica.available_seats(101,1)


