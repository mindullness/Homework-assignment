#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** accepts the following numbers in an array and reverses the array **\n\n");

	int num[5] = {34, 45, 56, 67, 89};
	int numRev[5];
	
	printf("The given int array is:  ");
	for(int i=0; i<5; i++){
		printf("%d ", num[i]);
		numRev[4-i] = num[i];
	}
	
	printf("\nThe reversed version is: ");
	for(int i=0; i<5; i++){

		printf("%d ", numRev[i]);
	}
	
}
