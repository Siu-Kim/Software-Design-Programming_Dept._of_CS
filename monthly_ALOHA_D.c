#include <stdio.h>

int arr_dist_stn[150000] ={0};
int arr_cost[150000];
int main() {
  int num_station, num_section;
  int start, destination;
  int distance_tot = 0;
  scanf("%d", &num_station);
  
  for(int i = 1; i < num_station; ++i){
    scanf("%d", &arr_dist_stn[i]);
  }

  scanf("%d", &num_section);  
  
  for(int i = 0; i < num_section; ++i){
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a > b){
      destination = a;
      start = b;
    }
    else{
      start = a;
      destination = b;
    }
    
    distance_tot = 0;
    for(int j = start; j < destination; ++j){
      distance_tot = distance_tot + arr_dist_stn[j];
    }
    printf("%d\n", distance_tot*10);
    
  } 
    
  return 0;
}