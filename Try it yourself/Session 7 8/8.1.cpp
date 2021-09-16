#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("*** This program is about to display the values of x and y if you guess it right! ***\n");

	int x, y;
	printf("Guess the value of X: ");
	scanf("%d", &x);
	printf("Guess the value of Y: ");
	scanf("%d", &y);
	
	if(x<2000 || x>3000)
		printf("Bingo! Value of X is %d.\n", x);
	else
		printf("Wasted! X value is still invisible!\n");		
	
	if(y>=100 && y<500)
		printf("Bingo! Value of Y is %d.\n", y);
	else
		printf("Wasted! Y value is still invisible!\n");
}

