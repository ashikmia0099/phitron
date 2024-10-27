n = input()

count_left = 0
count_right = 0

chack_string =[]
current_string = ""

for char in n:
    if char == "L":
        count_left += 1
    else:
        count_right += 1
    current_string += char
        
    if count_left == count_right:
        chack_string.append(current_string)
        current_string = ""
        count_left = 0
        count_right = 0
        
print(len(chack_string))
for i in chack_string:
    print(i)


