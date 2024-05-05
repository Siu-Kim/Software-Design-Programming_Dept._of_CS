#include <stdio.h>

int arr_mel[16] = {0,0,1,2,0,1,3,0,1,4,0,1,3,0,1,2,2};
int arr_melloc[100000];
int main() {
  int leng;
  int mel_num;
  int mel_loc = mel_num % 16;
  
  scanf("%d", &leng);
  
  for(int i = 0; i < leng; ++i){
    scanf("%d", &mel_num);
    if(mel_num % 16 == 0){
      arr_melloc[i] = 2;
    }
    else{
      arr_melloc[i] = arr_mel[mel_num % 16];
    }
  }
  
  for(int i = 0; i < leng; ++i){
    printf("%d\n", arr_melloc[i]);
  }
  
  return 0;

  
}