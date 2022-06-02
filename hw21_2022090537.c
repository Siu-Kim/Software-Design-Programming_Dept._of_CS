#include <stdio.h>
#include <stdlib.h>

struct Matrix{
  double* _ptr;
  int M;
  int N;
};

double get(struct Matrix* mat, int i, int j){
  return mat -> _ptr[i*mat->N+j];
}

void set(struct Matrix* mat, int i, int j, double d){
  mat -> _ptr[i*mat -> N + j] = d;
}

int main(void) {
  struct Matrix mat;
  int raw;
  int column;
  double mat_input;
  scanf("%d %d", &raw, &column);
  mat.M = raw;
  mat.N = column;
  
  
  
  double* ptr_matrix = (double*)malloc((raw*column)*sizeof(double));
  mat._ptr = ptr_matrix;

  for(int i = 0; i < raw; i++){
    for(int j = 0; j < column; j++){
      scanf("%lf", &mat_input);
      set(&mat, i, j, mat_input);
    }
  }

  for(int i = 0; i < raw; i++){
    for(int j = 0; j < column; j++){
      printf("%lf\t", get(&mat, i, j));
    }
    printf("\n");
  }

  
  return 0;
}