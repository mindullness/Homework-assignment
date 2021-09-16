#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("This program is to Find the sum of all odd numbers between the two numbers entered.\n");

	int num1, num2, sum;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);

	for(int i= ((num1<num2)?num1:num2); i <=((num1<num2)?num2:num1) ; i++){
		
		if(i%2 != 0){
			
			printf("%d\n", i);
			sum += i;
		}
	}
	
	printf("The sum of all odd numbers between the 2 numbers entered is: %d.", sum);
	
}
