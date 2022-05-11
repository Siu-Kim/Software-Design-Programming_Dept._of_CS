#include <stdio.h>
#include <string.h>
/* string을 입력받았을 때 오른쪽으로 shift시켜서 나올 수 있는 모든 문자열을 출력하는 프로그램을 작성하시오. 한 개의 문자열이 주어지고, 길이는 500보다 크지 않다고 가정한다.
  */
char arr_str[500];

int main() {
  
  scanf("%s", arr_str);
  int leng = strlen(arr_str);
  //str[leng - 1]
  
  for(int j = leng; j > 0; --j){
    for(int i = j; i < leng; i++){
      printf("%c", arr_str[i]);
    }
    for(int k = 0; k < j; k++){
      printf("%c", arr_str[k]);
    }
    printf("\n");
  }
  
  return 0;
}