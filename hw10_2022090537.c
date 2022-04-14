#include <stdio.h>

int main() {
    int a;
    printf("Input number: ");
    scanf("%d", &a);
    int save_num = 0;
  
    for(int i = 0; i <= a; i++){
        save_num = save_num + i;

    }
    printf("Sum of numbers: %d", save_num);
  
    return 0;
}