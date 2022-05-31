#include <stdio.h>
/*
학생 수 n을 입력받고, 각 학생들의 국어, 영어, 수학 성적을 입력한 후 평균의 높은 순으로 성적의 평균을 출력하는 프로그램

  */

int main(void) {
  int arr_grade[10000][3];
  int arr_average[10000];
  int num_stu;
  scanf("%d", &num_stu);

  for(int i = 0; i < num_stu; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &arr_grade[i][j]);
    }
  }
  int tmp1;
  
  for(int i = 0; i < num_stu; i++){
    for(int j = 0; j < 3; j++){
      tmp1 += arr_grade[i][j];
    }
    arr_average[i] = tmp1 / 3;
    tmp1 = 0;
  }
  
  int tmp2; 
  for(int j = 0; j < num_stu; j++){ 
    for(int i = 0; i < num_stu; i++){
      if(arr_average[j] > arr_average[i]){
        tmp2 = arr_average[j];
        arr_average[j] = arr_average[i];
        arr_average[i] = tmp2;
      }
    }
  }

  for(int i = 0; i< num_stu; i++){
    printf("%d등 성적의 평균 : %d\n", i+ 1, arr_average[i]);
  }

  return 0;
}