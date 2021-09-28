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
struct rectangles{
	int width, height;
	char color[21];
};
void question_2(){
	
	int n;
	do{
		printf("\nEnter the number of rectangles: "); scanf("%d", &n);
	}while(n<0);
	struct rectangles rec[n];
	
	printf("Please enter the data for\n");
	for(int i=0;i<n;i++){
		printf("    Rectangle no %d:\n", i+1);
		do{
			printf("\tWidth: "); scanf("%d", &rec[i].width);
		}while(rec[i].width<=0);
		do{
			printf("\tHeight: "); scanf("%d", &rec[i].height);
		}while(rec[i].height<=0);
		fflush(stdin);
		printf("\tColor: "); gets(rec[i].color);
	}
	printf("List of Rectangles\n");
	printf("No   Width    Height      Area       Color\n");
	printf("============================================\n");
	
	for(int i=0;i<n;i++){
		printf(" %d   %-3d\t%-5d",i+1, rec[i].width, rec[i].height);
		printf("\t  %-5d\t    %s\n", rec[i].width*rec[i].height, rec[i].color);
	}
	if(n>1)
		printf("Total %d rectangles\n", n);
	else
		printf("Total 1 rectangle\n");
	
}










