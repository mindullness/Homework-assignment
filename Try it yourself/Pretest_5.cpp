#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cmath>
void task1();
void task2();

int main(){

	while(1){

		printf("\n\t****************************************************\n");
		printf("\t* Selecting appropriate action:                    *\n");
		printf("\t*   1. Task 1                                      *\n");
		printf("\t*   2. Task 2                                      *\n");
		printf("\t*   3. Quit program                                *\n");
		printf("\t****************************************************\n");
		char op;
		printf("\n\tYour choice: "); op = getche();
		switch(op){
			case '1':
				task1();
				break;
			case '2':
				task2();
				break;
			case '3':
				printf("\n\tHave a nice day :D");
				return 0;
			default:
				printf("\n\tInvalid input!");
				break;
		}
	}
}
int countDigit(int n);
int checkArmstrong(int n);
void task1(){
	
	int n;
	do{
		printf("\n\tEnter N: "); scanf("%d", &n);
	}while(n<0);
	int flag = checkArmstrong(n);
	if(flag)
		printf("\t>> %d is the armstrong number!\n", n);
	else
		printf("\t>> %d is not the armstrong number!\n", n);
}
int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int checkArmstrong(int n){
	
	int flag=0, sum=0;
	int rem, temp = n;
	int digit = countDigit(n);
	
	while(temp != 0){
		rem = temp%10;
		temp/=10;
		sum+= pow(rem, digit);
	}
	if(sum==n)
		flag=1;
	return flag;
}
struct doctor{
	char ID[5];
	char name[31];
	char specialist[20];
	int exp_year;
};
void task2(){
	int n;
	do{
		printf("\n\tEnter the number of doctors (>=3 and <10): ");
		scanf("%d", &n);
	}while(n<3 || n>=10);

	struct doctor list[n];
	printf("\n\tInput some information for each doctor: \n");
	for(int i=0; i<n; i++){
		fflush(stdin);
		printf("\t>>  Doctor %d: \n", i+1);
		printf("\tID: "); scanf("% [^\n] s", list[i].ID);
		printf("\tDoctor name: "); gets(list[i].name);
		printf("\tSpecialist: "); gets(list[i].specialist);
		do{
			printf("\tYears of experience: "); scanf("%d", &list[i].exp_year);
		}while(list[i].exp_year<0);
		
	}
	printf("\n  List of Doctors (over ten years experience)\n");
	for(int i=0; i<n ; i++){
		if(list[i].exp_year>=10){
			printf("  >>  Id: %s, name: %s, ", list[i].ID, list[i].name);
			printf("specialist: %s, exp-years: %d\n", list[i].specialist, list[i].exp_year);
		}
	}
	
}

