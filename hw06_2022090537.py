arr = [0, 1]

def star():
    print("*" * 15)

def a():
    print("1.Calculate\n2.Show it!\n3.Initialize\n4.Quit")

def Calculate(fib_num):
    for i in range(2, fib_num):
        arr.append(arr[i-1] + arr[i-2])

while 1:
    star()
    a()
    star()
    mode = int(input("Input  :  "))
    
    if mode == 1:
        Fibonacci = int(input("Input the number  :  "))
        Calculate(Fibonacci)
    elif mode == 2:
        print(arr)
    elif mode == 3:
        arr = [0, 1]
    elif mode == 4:
        break

