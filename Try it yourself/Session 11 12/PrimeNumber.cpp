#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>
int main(){

	printf("** Check a number whether it is prime or not **\n\n");
	
	int num, flag=1;
	printf("Input a number: ");
	scanf("%d", &num);
	
	for(int i=2; i<=sqrt(num); i++){
		if(num%i==0){
			flag=0;
			printf("Number %d can be divided by %d.\n", num, i);
			break;
		}
	}

	if(flag)
		printf("Number %d is a prime number!", num);
	else
		printf("Number %d is NOT a prime number!", num);
}
