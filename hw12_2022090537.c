#include <stdio.h>

int main(void) {
    int arr[10000];
    int leng;
    int num;
    int value = 0;
    scanf("%d", &leng);
  
  
    for(int i = 0; i < leng; i++){
        scanf("%d", &num);
        arr[i] = num;
    }

    for(int i = 0; i < leng; i++){
        printf("%d ", arr[i]);  
    }

    for(int i = 0; i < leng; i++){
        if(arr[i] >= value){
            value = arr[i];
        }
    }
    printf("\n");
    printf("%d", value);
  
    return 0;
}