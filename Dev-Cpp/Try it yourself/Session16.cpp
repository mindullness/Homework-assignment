#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cmath>
void s16_partII();
void s16_1();
void s16_2();
int main(){

	while(1){

		printf("\n  *** MENU Session 16 - Functions (Lab) ***\n\n");
		printf("Press (1) Run Part II - For the next 30 minutes.\n");
		printf("Press (2) Run Try It Yourself 16.1.\n");
		printf("Press (3) Run Try It Yourself 16.2.\n");
		printf("Press (4) Exit. \n");
		printf("Press: ");
		char op = getche();
	
		switch(op){
			case '1':
				s16_partII();
				break;
  			case '2':
				s16_1();
				break;
			case '3':
				s16_2();
				break;
			case '4':
				return 0;
			default:
				printf("\nInvalid input! Re-input!");
				break;
		}
	}
}
//Part II - For the next 30 minutes:
int square(int a);
void s16_partII(){
	printf("\n\t*** Part II - For the next 30 minutes ***\n");
	printf("\n\tAccepts a number and square the number with the help of a function.\n");
	int a;
	printf("\tInput a number: ");
	scanf("%d", &a);
	printf("\tThe square number is: %d.\n", square(a));
	
}
int square(int a){
	return a*a;
}
//Try It Yourself 16.1
float perimeter(int r);
float area(int r);
void s16_1(){
	int r;
	printf("\n\t*** Exercise 1 ***\n\tCalculate the perimeter and the area of a circle.\n");
	do{
    printf("\n\tInput the radius of the circle: ");
	scanf("%d", &r);
	}while(r<=0);
	
	printf("\n\tPress (1) to Calculate the perimeter.");
	printf("\n\tPress (2) to Calculate the area.");
	printf("\n\tPress (3) to Calculate both of (1) & (2).");
	printf("\n\tPress any to Quit this exercise.\n\tPress: ");
	int op = getche();
	
	switch(op){
			case '1':
				printf("\n\tThe perimeter of this circle: %.2f\n",perimeter(r));
				break;
  			case '2':
				printf("\n\tThe area of this circle: %.2f\n", area(r));
				break;
			case '3':
				printf("\n\tThis circle's perimeter: %.2f",perimeter(r));
				printf("\n\tThis circle's area: %.2f\n",area(r));
				break;
			default:
				return;
		}
}
float perimeter(int r){
	return r*2*M_PI;
}
float area(int r){
	return square(r)*M_PI;
}

//Try It Yourself 16.2
long long int factorial(int a);
void s16_2(){
	int n;
	printf("\n\t*** Exercise 2 *** \n\tCalculate the factorial of an integer.");
	do{
		printf("\n\tInput an integer ( greater than 1 ): ");
		scanf("%d", &n);
	}while(n<=1);
	
	printf("\tThe factorial %d!: %lld.\n", n, factorial(n));
}

long long int factorial(int n){
	long long int fac = 1;

	for(int i=1; i<=n ; i++){
		fac = fac*i;
	}
	return fac;
}
