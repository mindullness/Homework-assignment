#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	printf("*** This program is about to check the divisibility of the two integer numbers ***\n");
	
	int a,b;
	
	printf("\nEnter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	if(a%b==0)
		printf("\nThis integer number, a = %d, is divisible by b = %d.", a, b);
	else
		printf("\nThis integer number, a = %d, is NOT divisible by b = %d.", a, b);
}

