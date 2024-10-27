n = int(input())
array = list(map(int,input().split()))
count = 0

i = 0
while n > i:
    j = 0
    while j < n:
        if array[j] % 2 != 0:
            print(count)
            exit()
        array[j] //= 2
        j += 1
    count += 1
    i = i + i
print(count)

