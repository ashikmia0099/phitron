def all_sum( sum1, sum2, *numbers):
    sum = 0
    
    for i in numbers:
        sum = sum + i
    return sum

total = all_sum(10,20,40, 60,60)
print("Total sum of agrs number: ",total)