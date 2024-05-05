#include <stdio.h>
/*
월간 알로하의 진행 시간 n분, 대회 종료까지 남은 시간 a분, 엘사가 스코어보드를 얼리겠다고 예고한 시간 b가 주어진다.

전체 시간 - 남은 시간 a 가 경과한 시간이고 경과한 시간이 엘사가 예고한 시간보다 길면 전체 시간 - 엘사가 경고한 시간 b를 출력
경과한 시간이 엘사가 예고한 시간보다 짧으면 남은 시간 a를 출력
출력될 시간이 1분일 경우 minute으로 출력

  */
int main(void) {
  int min_tot[100000], min_left[100000], min_frozen[100000];
  int num_t;

  scanf("%d", &num_t);
  
  for(int i = 0; i < num_t; i++){
    scanf("%d %d %d", &min_tot[i], &min_left[i], &min_frozen[i]);
  }
  
  for(int i = 0; i<num_t; i++){
    int min_used = min_tot[i] - min_left[i];
    int min_remain;
    
    if(min_used >= min_frozen[i]){
      min_remain = min_tot[i] - min_frozen[i];
    }
    else if(min_used < min_frozen[i]){
      min_remain = min_left[i];
    }
    
    if(min_remain != 1){
      printf("The scoreboard was frozen with %d minutes remaining.\n", min_remain);  
    }
    else{
      printf("The scoreboard was frozen with 1 minute remaining.\n");
    }
    
  }
  
  return 0;
}