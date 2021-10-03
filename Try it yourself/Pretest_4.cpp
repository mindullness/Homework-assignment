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
		printf("\t*   1. Question 1                                    *\n");
		printf("\t*   2. Question 2                                    *\n");
		printf("\t*   3. Quit program                                  *\n");
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

	printf("\n\t*** Calculate the sum of multiples of N2 which less than N1 ***\n\n");
	int N1, N2, sum=0;
	
	do{
		printf("\tEnter an the first number N1 (<100) : "); scanf("%d", &N1);
	}while(N1>=100);
	
	do{
		printf("\tEnter an the first number N2 (>10) : "); scanf("%d", &N2);
	}while(N2>10);
	
	printf("\n\tMultiples of %d (<=%d) are: ", N2, N1);
	
	for(int i=1; N2*i <= N1 ;i++){
		printf(" %d", N2*i);
		sum+=N2*i;
	}
	printf("\n\tSum of them are: %d", sum);
}
struct countries{
	char name[31];
	char capital[31];
	double area;
};
void question_2(){
	printf("\n* * * Finding The Largest Nation * * *\n");
	int NumOfCountry;
	do{
		printf("\nEnter the number of countries (<10): ");
		scanf("%d", &NumOfCountry);
		if(NumOfCountry >= 10)
			printf("\n\tNumber of countries must be less than 10! Input again...");
	}while(NumOfCountry >= 10);
	
	struct countries Nation[NumOfCountry];
	printf("\nPlease enter the data for \n");
	for(int i=0; i<NumOfCountry; i++){
		printf("    Country no %d:\n", i+1);
		fflush(stdin);
		printf("\t  name : "); gets(Nation[i].name);
		printf("\t  capital: "); gets(Nation[i].capital);
		printf("\t  area (square miles): "); scanf("%f", &Nation[i].area);
	}
	double MaxArea=Nation[0].area;
	for(int i=0; i<NumOfCountry; i++){
		MaxArea = (MaxArea>Nation[i].area)?MaxArea:Nation[i].area;
	}
	for(int i=0; i<NumOfCountry; i++){
		if(Nation[i].area==MaxArea)
			printf("\n\t => THE LARGEST NATION IS %s\n", Nation[i].name);
	}

}

