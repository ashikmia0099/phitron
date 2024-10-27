class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall):
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

    def entry_show(self, id, movie_name, time):
        show_details = (id, movie_name, time)
        self._show_list.append(show_details)
        self._seats[id] = [["Free" for i in range(self._cols)] for j in range(self._rows)]

    def book_seats(self, id, seat_list):
        if id not in self._seats:
            print(f"Your show id: {id} is not exist!")
        for row, col in seat_list:
            if row < 0 or row >= self._rows or col < 0 or col >= self._cols:
                print(f"Row {row} and column {col} is invalid!")
            elif self._seats[id][row][col] != "Free":
                print(f"Row {row} - Column {col} is already booked!")
            else:
                self._seats[id][row][col] = "booked"
                print(f"Row {row} and Column {col} seats successfully booked")

    def view_show_list(self):
        print("Running show:", self._hall_no)
        for i in self._show_list:
            id, movie_name, time = i
            print(f"Show info: {id}, {movie_name}, {time}")

    def view_available_seats(self, id):
        if id in self._seats:
            print(f"Available seats for show id: {id} in hall no->{self._hall_no}")
            for row in range(self._rows):
                for col in range(self._cols):
                    if self._seats[id][row][col] == "Free":
                        print("0",end=" ")
                    else:
                        print("1",end=" " )
        else:
            print(f"Show id {id} and hall no. {self._hall_no} does not exist")


banani_hall = Hall(rows=5, cols=4, hall_no=101)
new_hall = Hall(rows=3, cols=5, hall_no=201)

metro_hall = Star_Cinema.hall_list

for hall in metro_hall:
    print(f"Hall No: {hall._hall_no}, Rows: {hall._rows}, Columns: {hall._cols}")

banani_hall.entry_show(id=1, movie_name="jawan", time="12.10 pm")
banani_hall.entry_show(id=2, movie_name="Leo", time="3.30 pm")
new_hall.entry_show(id=1, movie_name="Sujon Mazi", time="10.00 am")

print(banani_hall._show_list)
print(new_hall._show_list)

while True:
    print("Select an option:")
    print("1. view all show are running: ")
    print("2. view available seats in show: ")
    print("3. booking ticket in show: ")
    print("4. Exit")
    
    choice = input("Enter your choice: ")

    if choice == "1":
        banani_hall.view_show_list()
        new_hall.view_show_list()

    elif choice == "2":
        show_id = int(input("Enter the show id: "))
        
        seat_input = input("Enter row and column numbers for seats (e.g., 0 0 1 1): ")
        seat_values = list(map(int, seat_input.split()))
        seat_list = [seat_values[i:i + 2] for i in range(0, len(seat_values), 2)]

        banani_hall.book_seats(show_id, seat_list)

    elif choice == "3":
        show_id = int(input("Enter the show id: "))
        banani_hall.view_available_seats(show_id)
    elif choice == "4":
        break
    else:
        print("Invalid option. Please select a valid option.")


