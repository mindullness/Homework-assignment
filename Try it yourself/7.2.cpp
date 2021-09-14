#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	printf("*** This program is about to check the the product of the two integer numbers is equal to or greater than 1000 ***\n\n");
	
	int a, b;
	
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	if(a*b == 1000)
		printf("The product of these two numbers (a times b = %d * %d) is EQUAL to 1000.", a, b);
	else if(a*b > 1000)
		printf("The product of these two numbers (a times b = %d * %d) is GREATER than 1000.", a, b);
	else
		printf("The product of these two numbers (a times b = %d * %d) is LESS than 1000.", a, b);
}

