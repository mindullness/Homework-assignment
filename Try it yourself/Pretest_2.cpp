#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
void question_1();
void question_2();
int main(){

	while(1){

		printf("\n\t**************************************************** \n");
		printf("\t* Selecting appropriate action:                      *\n");
		printf("\t*               1. Question 1                        *\n");
		printf("\t*               2. Question 2                        *\n");
		printf("\t*               3. Quit program                      *\n");
		printf("\t**************************************************** \n");
		char op;
		printf("\n\tYour choice: "); op = getche();
		switch(op){
			case '1':
				question_1();
				break;
			case '2':
				question_2();
				break;
			case '3':
				return 0;
			default:
				break;
		}
	}
}
void question_1(){
	
	printf("\nQuestion 1:\nInput an integer N, after that listing and counting all of odd divisors of N.\n");
	int N, count=0;
	printf("\nEnter an integer number N: "); scanf("%d", &N);
	
	printf("Odd divisor of %d are: ",N);
	for(int i=1;i<=N;i+=2){
		if(N%i==0){
			printf("%d ",i);
			count++;
		}
	}
	printf("\nNumber of odd divisor of %d: %d\n", N, count);
}
void question_2(){
}

