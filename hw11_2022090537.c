#include <stdio.h>

int main() {

    int num1;
    scanf("%d", &num1);
    printf("%d단\n", num1);

    if(num1 > 9 || num1 < 1){
        printf("잘못된 입력범위 입니다.");
    }
    else{
        for(int i = 1; i < 10; i++){
        int value = 0;
        value = num1 * i;
        printf("%d*%d = %d\n", num1, i, value);
        }
    }
    return 0;
}
