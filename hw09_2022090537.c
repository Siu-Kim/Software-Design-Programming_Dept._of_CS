#include <stdio.h>

int main(){
	  int a, b, p, m, d, r, mul;
	    scanf("%d %d", &a, &b);
		      p = a + b;
	      m = a - b;
	        d = a / b;
		  r = a % b;
		    mul = a * b;

		      printf("Plus  :  %d\n", p);
		        printf("Minus  :  %d\n", m);
			  printf("Multiple  :  %d\n", mul);
			    printf("Divide  :  %d\n", d);
			      printf("Remainder  :  %d\n", r);

			        return 0;
}
