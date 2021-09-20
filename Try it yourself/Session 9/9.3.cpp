#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	printf("*** This program is to display the Fibonacci series ***\n\n");
	
	int N, sum2pre=0, num1=1, num2=1;
	do{
	printf("Enter the length of the Fibonacci series(>=3): ");
	scanf("%d", &N);
	}while(N<3);
	printf("\nThe Fibonacci series: ");
	
	for(int i=0; i<N-1; i++){
		
		printf("%d, ", num1);
		sum2pre = num1+num2;
		num1 = num2;
		num2 = sum2pre;
	}
	printf("%d.", num1);
}

