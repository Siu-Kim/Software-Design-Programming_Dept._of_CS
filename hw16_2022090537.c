#include <stdio.h>


int main() {

    int input_size, tmp; 
    int arr[1000] = { 0, };

    scanf("%d", &input_size);

	for (int i = 0; i < input_size; i++)	{
		scanf("%d", &tmp);
		arr[tmp]++; 
	}

	for (int j = 0; j < 1000; j++)	{
		if (arr[j] != 0) 
			printf("%d ", j);
	}
    printf("\n");

	return 0;
}