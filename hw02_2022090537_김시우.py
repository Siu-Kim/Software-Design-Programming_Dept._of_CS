# hw02_2022090537_김시우
# 컴퓨터소프트웨어학부 학번 : 2022090537 김시우 소프트웨어입문설계 실습과제 02
# 가장 낮은 층의 별 개수는 (2*높이) - 1
# 가장 높은 층의 여백 수 = 높이 (층마다 1씩 감소하여 가장 낮은 층의 여백은 1)
# 정삼각형의 높이는 입력받은 값

height = int(input("number = "))
floor = 0
blank = height
star_number = 1

while floor < height:
    floor += 1
    print(" " * blank + "*" * star_number)
    blank -= 1
    star_number += 2
    