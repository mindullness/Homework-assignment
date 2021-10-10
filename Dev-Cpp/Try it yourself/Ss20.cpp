#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int TIY_20_1();
void TIY_20_2();
int main(){

	while(1){

		printf("\n\t**************************************************** \n");
		printf("\t* Selecting appropriate action:                    *\n");
		printf("\t*        1. Session 20 - TIY 20.1 - page.320       *\n");
		printf("\t*        2. Session 20 - TIY 20.2 - page.320       *\n");
		printf("\t*        3. Quit program                           *\n");
		printf("\t****************************************************");
		char op;
		printf("\n\tYour choice: "); op = getche();
		switch(op){
			case '1':
				TIY_20_1();
				break;
			case '2':
				TIY_20_2();
				break;
			case '3':
				return 0;
			default:
				break;
		}
	}
}
struct length{
	float yard, feet, inches;
};

void sorting(struct length len[5]);
void baseInputYard(struct length len[5]);
void baseInputFeet(struct length len[5]);
void baseInputInches(struct length len[5]);

int TIY_20_1(){
	struct length len[5];
	printf("\n\t*** Sort and display the lengths in the form of yards, feet and inches ***\n");

	while(1){
		int form;
		printf("\nThe origin input length form is: ");
		printf("\n\t1. Yard\n\t2. Feet\n\t3. Inches\n\t4. Stop");
		
		char op1;
		printf("\n\tYour choice: "); op1 = getche();
		switch(op1){
			case '1':
				baseInputYard(len);
				break;
			case '2':
				baseInputFeet(len);
				break;
			case '3':
				baseInputInches(len);
				break;
			case '4':
				return (0);
			default:
				break;
		}
	}
}
void sorting(struct length len[5]){
	struct length temp;
	for(int i=0; i<4 ; i++){
		for(int j=i+1; j<5 ; j++){
			if(len[i].yard>len[j].yard){
				temp = len[i];
				len[i] = len[j];
				len[j] = temp;
			}
		}
	} // END Sorting FOR
}
void baseInputYard(struct length len[5]){
	int i;
	printf("\nInput 5 lengths as Yard-base form below: ");
	for( i=0; i<5;i++){
		printf("\n  Length %d: ", i+1); scanf("%f", &len[i].yard);
		len[i].feet = len[i].yard*3.0;
		len[i].inches = len[i].yard*36.0;
	}
	sorting(len);
	printf("\nThe 5 lengths as 3 forms yards, feet and inches: \n");
	printf("  Length\tYards (Base)\t    Feet\t  Inches\n");
	for( i=0; i<5;i++){
		printf("    %d\t\t%8.3f\t%8.3f\t%8.3f\n", i+1, len[i].yard, len[i].feet, len[i].inches);
	}
}
void baseInputFeet(struct length len[5]){
	int i;
	printf("\nInput 5 lengths as Feet-base form below: ");
	for( i=0; i<5;i++){
		printf("\n  Length %d: ", i+1); scanf("%f", &len[i].feet);
		len[i].yard = len[i].feet/3.0;
		len[i].inches = len[i].feet*12;
	}
	sorting(len);
	printf("\nThe 5 lengths as 3 forms yards, feet and inches: \n");
	printf("  Length\tFeet (Base)\t    Yards\t  Inches\n");
	for( i=0; i<5;i++){
		printf("    %d\t\t%8.3f\t%8.3f\t%8.3f\n", i+1, len[i].feet, len[i].yard, len[i].inches);
	}
}
void baseInputInches(struct length len[5]){
	
	int i;
	printf("\nInput 5 lengths as Inches-base form below: ");
	for( i=0; i<5;i++){
		printf("\n  Length %d: ", i+1); scanf("%f", &len[i].inches);
		len[i].feet = len[i].inches/12;
		len[i].yard = len[i].inches/36;
	}
	sorting(len);
	printf("\nThe 5 lengths as 3 forms yards, feet and inches: \n");
	printf("  Length\tInches (Base)\t    Yards\t  Feet\n");
	for( i=0; i<5;i++){
		printf("    %d\t\t%8.3f\t%8.3f\t%8.3f\n", i+1,len[i].inches, len[i].yard, len[i].feet);
	}
}

struct date{
	int dd,mm,yy;
};
struct employees{
	char ID[11];
	char Name[31];
	float BaseSalary;
	struct date DateOfJoin;
};
float getNetSalary(float sal);
void TIY_20_2(){
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
		fflush(stdin);
		printf("\tEmployee ID: "); gets(EMPL[i].ID);
		printf("\tEmployee Name: "); gets(EMPL[i].Name);
		do{
			printf("\tBase Salary: "); scanf("%f", &EMPL[i].BaseSalary);
		}while(EMPL[i].BaseSalary<0);
		
		printf("\tDate of Joining:\n");
		do{
			printf("\tDay: "); scanf("%d", &EMPL[i].DateOfJoin.dd);
		}while(EMPL[i].DateOfJoin.dd<=0||EMPL[i].DateOfJoin.dd>31);
		do{
			printf("\tMonth: "); scanf("%d", &EMPL[i].DateOfJoin.mm);
		}while(EMPL[i].DateOfJoin.mm<=0||EMPL[i].DateOfJoin.mm>12);
		do{
			printf("\tYear: "); scanf("%d", &EMPL[i].DateOfJoin.yy);
		}while(EMPL[i].DateOfJoin.yy<=1950 || EMPL[i].DateOfJoin.yy>2021);
	}

	printf("\n\n*** Displaying Employee Details completed 10 years experience ***\n");
	printf("  ID\t Name\t\t    Base Sal\t  Date Of Joining\tNet Salary\n");
	for(int i=0; i<numOfEMPL ; i++){
		int exp = 2021-EMPL[i].DateOfJoin.yy;
		if(exp>=10){
			printf(" %3s  ", EMPL[i].ID);
			printf("%-20s ", EMPL[i].Name);
			printf("%.2f\t", EMPL[i].BaseSalary);
			printf("  (%d yrs) %02d/%02d/%4d\t", exp, EMPL[i].DateOfJoin.dd, EMPL[i].DateOfJoin.mm, EMPL[i].DateOfJoin.yy);
			printf("  %-3.2f \n", getNetSalary(EMPL[i].BaseSalary));
		}
	}
}
float getNetSalary(float sal){
	if(sal<=2000)
		sal += sal*0.15;
	else if(sal <= 5000)
		sal += sal*0.1;
	return sal;
}
