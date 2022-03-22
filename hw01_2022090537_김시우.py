# hw01_2022090537_김시우.py
# 컴퓨터소프트웨어학부 2022090537 김시우
# 10명에 대한 pass/fail 의 정보를 입력받고, 열 명 중에서 pass 한 사람과 fail 한 사람의 수를 각각 출력
# pass 나 fail 이외의 값이 입력으로 들어오면 무효로 처리하여 pass 와 fail 모두에서 count 하지 않는다.

i = 0
number_pass = 0
number_fail = 0

while i < 10:
    chosen_porf = int(input("Enter result (1 = pass , 2 = fail) : \n"))
    if chosen_porf == 1:
        number_pass += 1
        i += 1
    elif chosen_porf == 2:
        number_fail += 1
        i += 1
    else:
        i += 1

print("pass :   %d"  % number_pass)
print("fail :   %d"  % number_fail)
        