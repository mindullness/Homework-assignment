#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** Find the minimum and the maximum value in an array \n\n**");
	
	int N;
	printf("Number of elements in the array: ");
	scanf("%d", &N);
	
	int a[N];
	printf("\nInput values for the array: \n");
	for(int i=0;i<N;i++){
		printf("Value %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	int min= a[0];
	int max= a[0];
	for(int i=0; i<N;i++){

		min = (min<a[i])?min:a[i];
		max = (max>a[i])?max:a[i];
	}
	printf("\nmin: %d, max: %d.", min, max);
}

