# def min_removals_to_good_sequence(N, a):
#     counts = {}
#     for x in a:
#         if x in counts:
#             counts[x] += 1
#         else:
#             counts[x] = 1

#     removals = 0
#     for x in counts:
#         if counts[x] > x:
#             removals += counts[x] - x

#     return removals

# # Input
# N = int(input())
# a = list(map(int, input().split()))

# # Calculate and print the minimum number of removals
# result = min_removals_to_good_sequence(N, a)
# print(result)


import pyautogui


n = int(input())


for i in range(1, n+1):
   pyautogui.write('#'* i)
#    pyautogui.press('enter')

