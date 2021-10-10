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
int factorial(int n);
void question_1(){
	
	printf("\n\n***** Finding the Factorial of a number Program *****\n");
	
	int num;
	do{
		printf("\nPlease enter a number from 1 to 10: "); scanf("%d", &num);
	}while (num<1 || num >10);
	
	printf("\nThe factory of %d is: %d \n", num, factorial(num));
}
int factorial(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	return fac;
}

float getNetSalary(float Sal, float WrkDay);
struct employees{
	int Num;
	char Name[31];
	float BaseSalary;
	float WorkedDays;
};

void question_2(){
	printf("\n* * * Employee Management System * * *\n");
	int numOfEMPL;
	do{
		printf("\nEnter the number of employee : ");
		scanf("%d", &numOfEMPL);
		if(numOfEMPL<1 || numOfEMPL>100)
			printf("\n\tThe number of employees must be between 1 and 100. Input again...");
	}while(numOfEMPL<1 || numOfEMPL>100);
	
	typedef struct employees arr1;
	arr1 EMPL[numOfEMPL];
	
	for(int i=0; i<numOfEMPL; i++){
		printf("Input employee no of %d :\n", i+1);
		printf("\tEmployee No. : "); scanf("%d", &EMPL[i].Num);
		fflush(stdin);
		printf("\tEmployee Name: "); gets(EMPL[i].Name);
		printf("\tBase Salary: "); scanf("%f", &EMPL[i].BaseSalary);
		printf("\tWorked days: "); scanf("%f", &EMPL[i].WorkedDays);
	}

	printf("\n\n*** Displaying the Salary Sheet ***\n");
	printf("No\t Name\t\t    Base Sal\t\tWrk days\tNet salary\n");
	for(int i=0; i<numOfEMPL ; i++){

			printf("%-8d ", EMPL[i].Num);
			printf("%-20s ", EMPL[i].Name);
			printf("%.2f\t", EMPL[i].BaseSalary);
			printf("\t%.1f\t", EMPL[i].WorkedDays);
			printf("\t%-3.2f \n", getNetSalary(EMPL[i].BaseSalary, EMPL[i].WorkedDays));
	}
}
float getNetSalary(float Sal, float WrkDay){
	return Sal*WrkDay;
}
