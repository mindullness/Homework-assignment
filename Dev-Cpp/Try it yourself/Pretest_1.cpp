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
		printf("\t****************************************************** \n");
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
	
	
	printf("\nQuestion 1:\n");
	int index=0;
	int limit=100;
	int arr[limit];
	char c;
	
	do{
		do{
			printf("\nEnter a positive number: ");
			scanf("%d", &arr[index]);
		}while(arr[index]<0);
		index++;
		do{
			printf("Continue <y/n>: ");
			c=getche();
		}while( c!='y' && c!='Y' && c!='n' && c!='N');
		
		if(c=='n'||c=='N')
				break;
		if(index==limit-1){
			printf("\nRunning out of memory! This time is the last time!");
		}
		
	}while(index<limit);
	
	printf("\nThe entered numbers are: ");
	for(int i=0;i<index;i++){
		printf("%d ", arr[i]);
	}
	int max=arr[0];
	for(int i=0; i<index; i++){
		max= (max>arr[i]?max:arr[i]);
	}
	printf("\nThe greatest numbers is: %d.\n", max);
}
void question_2(){
	
	struct student{
		char name[41];
		char enroll_Num[3];
		float sci_Mark, math_Mark, eng_Mark;
	};
	int n;
	printf("\n***** Student Management Program *****\n");
	do{
		printf("\nHow many students do you want to manage: ");
		scanf("%d", &n);
		if(n<1||n>100){
			printf("The number of student must be between 1 and 100. Press any key to continue.");
			getche();
		}
	}while(n<1||n>100);
	struct student list[n];
	printf("Please enter students data:\n");
	for(int i=0; i<n; i++){
		printf("\nStudent no %d:\n",i+1);
		fflush(stdin);
		printf("Name: "); gets(list[i].name);
		printf("Enrollment No: "); gets(list[i].enroll_Num);
		printf("Science Mark: "); scanf("%f", &list[i].sci_Mark);
		printf("Math Mark: "); scanf("%f", &list[i].math_Mark);
		printf("English Mark: "); scanf("%f", &list[i].eng_Mark);
	}
	printf("\n*****Students details*****\n");
	for(int i=0; i<n; i++){
		printf("\nStudent no: %d\n",i+1);
		printf("\tName: %s\n", list[i].name);
		printf("\tEnrollment No: %s\n",list[i].enroll_Num);
		printf("\tScience Mark: %.1f\n",list[i].sci_Mark);
		printf("\tMath Mark: %.1f\n",list[i].math_Mark);
		printf("\tEnglish Mark: %.1f\n",list[i].eng_Mark);
		printf("\tTotal Mark: %.1f\n",list[i].sci_Mark + list[i].math_Mark + list[i].eng_Mark);
		printf("\tAverage Mark: %.1f\n", (list[i].sci_Mark + list[i].math_Mark + list[i].eng_Mark)/3);
	}
}

