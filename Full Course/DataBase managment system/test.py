# import mysql.connector
# mydb = mysql.connector.connect(
#     host = "localhost",
#     user = "root",
#     password = "009900"
# )
# print(mydb)

import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="009900",
    database="your_database_name"  # Replace with the actual name of your database
)

print(mydb)

# Create a cursor object
mycursor = mydb.cursor()

# Now you can execute SQL queries using mycursor
