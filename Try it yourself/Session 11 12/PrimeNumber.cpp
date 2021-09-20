#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>
int main(){

	printf("** Check a number whether it is prime or not **\n\n");
	
	int a, flag=1;
	printf("Input a number: ");
	scanf("%d", &a);
	
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0){
			flag=0;
			printf("%d can divide for: %d.\n", a, i);
			break;
		}
	}
	
	if(flag)
		printf("Number %d is a prime number!", a);
	else
		printf("Number %d is NOT a prime number!", a);
}
