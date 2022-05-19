#include <stdio.h>

int Push(int x, int cnt_s);
int Pop(int cnt_s);
void stdoutput(int cnt_s);

int arr_s[10000];
int main() {
  int cnt_s = 0;
  int stdinput, stackinput;
  
  
  while(1){
    scanf("%d", &stdinput);
    if(stdinput == 1){
      scanf("%d", &stackinput);
      cnt_s = Push(stackinput, cnt_s);
    }
    else if(stdinput == 2){
      cnt_s = Pop(cnt_s);
    }
    else if(stdinput == 0){
      stdoutput(cnt_s);
      break;
    }
  }
  
  return 0;
}

int Push(x, cnt_s){
  
  if(arr_s[cnt_s] > 0) cnt_s++;
  else arr_s[cnt_s++] = x;
  
  return cnt_s;
}

int Pop(int cnt_s){
  //if(arr_s[cnt_s]>0){
   arr_s[cnt_s-1] = 0;
  cnt_s--;
  //}
  
 return cnt_s; 
}

void stdoutput(cnt_s){
  printf("%d\n", cnt_s);
  printf("%d\n", arr_s[cnt_s-1]);
  for(int i = cnt_s-1; i >= 0; i--){
    printf("%d ", arr_s[i]);
  } 
}