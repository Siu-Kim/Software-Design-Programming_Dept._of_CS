# 두 개의 list를 입력받고 첫 번째 리스트를 shift해서 두 번째 리스트와 같게 만드는데 
# 몇 번의 shift를 거쳐야 하는 지를 구하는 프로그램
# shift의 방식은 먼저 입력받은 두 개의 리스트의 요소의 종류와 수가 같은 지를 확인한 후, 마지막 요소를 변수에 저장한 뒤
# 나머지 요소의 위치를 하나 씩 옮겨줌. 이후 변수에 저장한 요소를 리스트의 첫 번째 자리에 저장.

num_shift = 0
is_it_wrong = 0

def need_same_list(list_one, list_two):
    global is_it_wrong
    if len(list_one) != len(list_two):
           print("Not circular indentical!")
    else:
        for i in range(len(list_one)):
            if list_one[i] not in list_two:
                is_it_wrong += 1
        if is_it_wrong != 0:
            print("Not circular indentical!")
                    
    

def shift_list(list_one, list_two):
    global num_shift
    while list_one != list_two: 
        last_value = list_one[-1]
        i = len(list_one) - 1
        
        while i > 0: 
            list_one[i] = list_one[i-1]
            i -= 1
        
        list_one[0] = last_value
        num_shift += 1
    return num_shift



list_one = list(map(str, input("Input first string : ").split()))
list_two = list(map(str, input("Input second string : ").split()))

need_same_list(list_one, list_two)

value = shift_list(list_one, list_two)
print("Circular string to right %d time." %value)

