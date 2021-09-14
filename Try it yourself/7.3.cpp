#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <cmath>
int main(){
	
	printf("*** This program is about to Calculate the difference between the two values ***\n");
	
	int a,b, diff; // diff: difference
	do{	
		printf("\nEnter value a: ");
		scanf("%d", &a);
		printf("Enter value b: ");
		scanf("%d", &b);
		
		if(a !=0 && b!=0)
		{
			diff = abs(a-b);
			if(diff == a)
				printf("Difference is equal to value a: %d.", a);
			else if(diff == b)
				printf("Difference is equal to value b: %d.", b);
			else
				printf("Difference is not equal to any of the values entered.");
		} else		
			printf("Entering a zero value twice is not wise! Redo it!");	
	
	} while(a==0 && b==0);
	
}

