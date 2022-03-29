import random

num_list = []

for i in range (1, 101):
    num_list.append(random.randint(1, 1000))
    

for j in range(0, 99):
    if num_list[j] <= num_list[j+1]:
        up = num_list[j+1]
    else:
        up = num_list[j]

print(num_list)
print("Maximum number is %d" % up)