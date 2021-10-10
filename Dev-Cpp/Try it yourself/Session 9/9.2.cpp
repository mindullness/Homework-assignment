#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("This program is to Find the sum of all odd numbers between the two numbers entered.\n");

	int a, b, sum;
	printf("Enter number 1: ");
	scanf("%d", &a);
	printf("Enter number 2: ");
	scanf("%d", &b);

	for(int i= ((a<b)?a:b) ; i <= ((a<b)?b:a) ; i++){
		
		if(i%2 != 0){
			
			sum += i;
		}
	}
	
	printf("The sum of all odd numbers between the 2 numbers entered is: %d.", sum);
	
}
