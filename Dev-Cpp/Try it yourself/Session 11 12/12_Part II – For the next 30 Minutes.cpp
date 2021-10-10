#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	
	printf("** Accepts a set of numbers in an array and reverses the array **\n\n");

	int N;
	printf("Enter how many numbers in a set here: ");
	scanf("%d", &N);
	printf("\nInput value for each number as below:\n");
	
	int num[N];
	int revNum[N];
	
	for(int i=0;i<N;i++){
		
		printf("No.%d: ", i+1);
		scanf("%d", &num[i]);
		revNum[N-1-i] = num[i];
	}

	printf("The given set of numbers is:  ");
	for(int i=0; i<N; i++){
		printf("%d ", num[i]);
	}
	
	printf("\n\nThe reversed version of it is: ");
	for(int i=0; i<N; i++){
		printf("%d ", revNum[i]);
	}
	return 0;
}
