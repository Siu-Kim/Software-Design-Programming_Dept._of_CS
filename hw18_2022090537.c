#include <stdio.h>
#include <string.h>

int main(void) {
  char arr_str[5000];
  char* arr_split[5000];
  int arr_num[5000];
 
  char* a = ",";
  char* b = "!";
  char* c = "?";

 
  int i = 0, j = 0;
  int tmp, tmp2 = 0;
  scanf("%[^\n]s", arr_str);
  

  char *ptr_arr = strtok(arr_str, " ");
  
  while (ptr_arr != NULL){ 
    
    tmp = 0;
    for(int k = 0; k < j; k++){
      if(strcmp(arr_split[k], ptr_arr) == 0){  
        arr_num[k]++;
        tmp = 1; 
      }
    }
    
    if(tmp == 0){
      arr_split[j] = ptr_arr;
      arr_num[j] = 1;
      j++;
    }
    ptr_arr = strtok(NULL, " ");  
  }  
  
  for(int k = 0; k < j; k++){
    if(strcmp(arr_split[k], a) != 0 && strcmp(arr_split[k], b) != 0 && strcmp(arr_split[k], c) != 0){
      printf("%s %d\n", arr_split[k], arr_num[k]);
    }

  }

  return 0;

}