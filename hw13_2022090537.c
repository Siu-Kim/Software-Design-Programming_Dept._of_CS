#include <stdio.h>

int arr1[1000];
int arr_sub[334] = {0};
int main(void) {
    int num1;
    int value;
    scanf("%d", &num1);

    for(int i = 0; i < num1; i++){
        scanf("%d", &arr1[i]); 
    }
  
  
    for(int j = 1; j <= num1-2; j++){
        arr_sub[j] = arr1[j-1] + arr1[j] + arr1[j+1];
    }


    for(int i = 0; i < num1 - 2; i++){
        if(arr_sub[i] <= arr_sub[i+1]){
            value = arr_sub[i+1];
        }
    }

    printf("%d\n", value);

    return 0;
}