#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

printf("*** This program is to Display a user's name as many times as his age ***\n\n");

	int age; // h: height.
	char name[30];
	
	printf("Your name is: ");
	scanf("%[^\n]s", name);
	printf("Input your age:");
	scanf("%d", &age);
	
	printf("Let's see %d times of your name, as your age, is showed up down here:\n", age);
	for(int i=0,j=1; i<age-1; i++,j++){
		printf("%s, ", name);
		if(j==4){
			printf("\n");
			j=0;
		}
	}
	printf("%s.", name);
}

