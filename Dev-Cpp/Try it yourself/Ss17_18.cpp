#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cmath>
void s17_1();
void s17_2();
void s18_partII();
void s18_1();
void s18_2();
int main(){

	while(1){

		printf("\n\t  *** MENU ***\n\n");
		printf("Press (1) Run Session 17 - p281. TIY 17.1\n");
		printf("Press (2) Run Session 17 - p281. TIY 17.2\n");
		printf("Press (3) Run Session 18 - p290. Part II (For the next 30 minutes)\n");
		printf("Press (4) Run Session 18 - p291. TIY 18.1\n");
		printf("Press (5) Run Session 18 - p291. TIY 18.2\n");
		printf("Press (6) Exit \n");
		printf("Press: ");
		char op = getche();

		switch(op){
			case '1':
				s17_1();
				break;
  			case '2':
				s17_2();
				break;
			case '3':
				s18_partII();
				break;
			case '4':
				s18_1();
				break;
			case '5':
				s18_2();
				break;
			case '6':
				exit(0);
		}
	}
	
}
// 17.1 Write a program that accepts two strings. The program should determine
//		whether the first string occurs at the end of the second string.
void s17_1(){
	printf("\n\tAccept 2 strings and determine ");
	printf("\nwhether the first string occurs at the end of the second string.\n");
	
	char str_1[30];
	char str_2[30];
	printf("Input 1st string: "); gets(str_1);
	printf("Input 2nd string: "); gets(str_2);
	
	if(strstr(str_2, str_1))
		printf("The 1st string, [%s], Found in the 2nd string, [%s]!", str_1, str_2);
	else
		printf("None of 1st string Found in 2nd string!");
	return;
}

// 17.2 Write a program that accepts an array of integers and displays the average.
//		Use a function to calculate the average.
double getAverage(int arr[], int size);
void s17_2(){
	printf("\n\tAccepts an array of integers and displays the average");
	int n;
	printf("\nInput the number of elements in the array: ");
	scanf("%d", &n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Input element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
		printf("The average point of the integer array is: %.2f.", getAverage(arr, n));

}
double getAverage(int arr[], int size){
	
	double sum=0.0;
	for(int i=0; i<size ;i++){
		sum+=arr[i];
	}
	return sum/size;
}
// 18 part II Write a C Program to display the number of times a specified character
//	  occurs in a string. Set a loop to perform the operation 5 times.
int count_char(char arr[], char ch, int size);
void s18_partII(){
	int periods = 1;
	printf("\n\tYou're experiencing an operation performance 5 times of\n");
	printf("Finding a specified character occurs in a string. Enjoy your 5 'lucky' times periods!\n");
	do{
		char string[31];
		char ch;
		printf("\nRound %d:\nInput the string: ",periods); gets(string);
		printf("\nSearching character: "); ch=getche();

		int count = count_char(string, ch, strlen(string));
		if(count==0)
			printf("\nCharacter, %c, has NOT been found!", ch);
		else if(count==1)
			printf("\nFound character \"%c\" 1 time in the string \"%s\".", ch, string);
		else
			printf("\nFound character \"%c\" %d times in the string \"%s\".", ch, count, string);
		periods++;
	}while(periods<=5);
	
	printf("\nPeriods is over! Thanks for your patience!\n");
}
int count_char(char arr[], char ch,int size){
	int count=0;
	for(int i=0; i<size; i++){
		if(arr[i] == ch)
			count++;
	}
	return count;
}
// 18.1 Write a C Program to accept 5 names and a prefix. Insert the prefix at the beginning of
//		each name in the array. Display the modified names
int concateName(int j, char arr1[], char arr2[]);
void s18_1(){
	
	printf("\t*** Accept 5 names and a prefix. Display the modified names ***\n");
	char name[5][21];
	char prefix[10];
	
	printf("Choose the title for the names: "); gets(prefix);
	
	for(int i=0;i<5;i++){
		printf("Input the name %d: ",i+1); gets(name[i]);
	}
	
	for(int i=0;i<5;i++){
		concateName(i+1,prefix, name[i]);
	}
}
int concateName(int j, char arr1[], char arr2[]){
	char temp[10];
	strcpy(temp, arr1);
	printf("The modified name %d: %s.\n", j, strcat(temp, arr2));
	return 0;
 }

// 18.2 Write a C Program to accept the average yearly temperature of the past five years, for five
//		cities. Display the maximum and minimum temperature for each city. Use functions to
//		determine the maximum and minimum temperatures.
float rand_temp();
void cityName(int i);
float max(int i, float arr[5][5]);
float min(int i, float arr[5][5]);
void s18_2(){
	
	printf("\n\t*** Display max, min temperature ***\n");
	float max_temp, min_temp, temp[5][5];
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			temp[i][j] = rand_temp();
		}
	}
	printf("The average temperature of the past 5 years in 5 cities:\n\n");
	for(int i=0;i<5;i++){
		
		cityName(i);
		for(int j=0;j<5;j++){
			printf("Year %d: %4.1f %cC   ",1+j, temp[i][j], 167);
		}
		printf("\nThe maximum temperature in 5 years is: %4.1f %cC\n", max(i, temp), 167);
		printf("The minimum temperature in 5 years is: %4.1f %cC\n\n", min(i, temp), 167);
	}
}

float max(int i, float arr[5][5]){
	float max=arr[i][0];

	for(int j=0;j<4;j++){
		if(max<arr[i][j+1])
			max=arr[i][j+1];
	}
	return max;
}
float min(int i, float arr[5][5]){
	float min=arr[i][0];
	
	for(int j=0;j<4;j++){
		if(min>arr[i][j+1])
			min=arr[i][j+1];
	}
	return min;
}

float rand_temp(){
	int up=45, low=-10;
	return ( (rand()%(up-low+1)) + low)/1.1;
}
void cityName(int i){
	switch(i){
		case 0:
			printf(">> Venice:\n\t");
			break;
		case 1:
			printf(">> Los Angeles:\n\t");
			break;
		case 2:
			printf(">> Charles De Gaulle:\n\t");
			break;
		case 3:
			printf(">> Rio De Janeiro:\n\t");
			break;
		case 4:
			printf(">> San Francisco:\n\t");
			break;
		default:
			break;
	}
}

