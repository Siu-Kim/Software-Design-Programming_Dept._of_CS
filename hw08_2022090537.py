# hw08_2022090537.py 컴퓨터소프트웨어학부 2022090537 김시우
# n을 입력받으면 재귀함수 실행. fibo_list[n] = fibo_list[fibo(n - 1) + fibo_list[fibo(n-2)]를 실행하면 재귀호출이 반복됨
# 재귀 함수의 종료 조건은 fibo_num이 0 또는 1일 때

def fibo(fibo_num):
    if fibo_num == 0:
        return 0
    elif fibo_num == 1:
        return 1
    
    
    fibo_value = fibo(fibo_num - 1) + fibo(fibo_num - 2)
    return fibo_value


fibo_list = [0, 1]
num = int(input("Input the number  :  "))
fibo_number = fibo(num)
print("%d  th fibonacci number is %d" %(num, fibo_number))


