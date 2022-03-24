#hw04_2022090537_김시우.py



def GCD(num1, num2):   
    if num1 > num2:
        low_num = num2
    else:
        low_num = num1

    for i in range(low_num + 1, 0, -1):
        if num1 % i == 0 and num2 % i == 0:
            print("Greatest common divisor : %d" %i)
            break  
    
def LCM(a, b):
    
    if num1 < num2:
        high_num = num2
    else:
        high_num = num1
    for i in range(high_num, num1*num2 + 1):        
        if i % num1 == 0 and i % num2 == 0:
                print("Least common multiple : %d" %i)
                break
    
num1 = int(input("숫자를 입력하시오 : "))
num2 = int(input("숫자를 입력하시오 : "))

GCD(num1, num2)
LCM(num1, num2)

