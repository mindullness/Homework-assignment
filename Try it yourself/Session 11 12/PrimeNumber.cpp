#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** Check a number whether it is prime or not **\n\n");
	
	int a;
	printf("Input a number: ");
	scanf("%d", &a);
	
	if(a%2 != 0)
		printf("Number %d is a prime number!", a);
	else
		printf("Number %d is NOT a prime number!", a);
}
