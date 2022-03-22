

def first_string():
    print("*" * 20)
    print("1.  Only increasing\n2.  Only decreasing\n3.  Increasing and decreasing\n4.  Repeat increasing and decreasing 10 times.")
    print("*" * 20)

def incr(hgt):
    number_star = 1

    while number_star <= hgt:
        print("*" * number_star)
        number_star += 1

def decr(hgt):
    number_star = hgt
    
    while number_star > 0:
        print("*" * number_star)
        number_star -= 1
    
first_string()
form = int(input("Input  :  "))
hgt = int(input("Height  :  "))

if form == 1:
    incr(hgt)
elif form == 2:
    decr(hgt)
elif form ==3:
    incr(hgt)
    decr(hgt-1)
elif form == 4:
    i = 1
    while i <= 10:
        i += 1 
        incr(hgt)
        decr(hgt-1)
    