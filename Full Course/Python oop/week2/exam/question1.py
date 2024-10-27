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
        
banani_hall = Hall(rows=10,cols=20, hall_no=1)
star = Star_Cinema.hall_list

for hall in star:
    print(f"Hall No: {hall.hall_no}, Rows: {hall.rows}, Columns: {hall.cols}")