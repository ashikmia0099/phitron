import mysql.connector
mydbconnection = mysql.connector.connect(
    host = "localhost",
    user = "root",
    password = "009900"
)
print(mydbconnection)

db_name = "python_test_db"
mycursor = mydbconnection.cursor()
sqlquary = "Create Dababase " + db_name
mycursor.execute(sqlquary)