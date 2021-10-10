#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	printf("*** This program is about to find the highest value of the 3 input values ***\n");
	
	int a, b, c, max;
	printf("Input value 1: ");
	scanf("%d", &a);
	printf("Input value 2: ");
	scanf("%d", &b);
	printf("Input value 3: ");
	scanf("%d", &c);
	
	if(a==b && b==c)
		printf("All the values are equal!");
	else{
		
//		if(a>b)
//			if(a>c)
//   				max = a;
//			else
//				max = c;
//		else
//			if(b>c)
//				max = b;
//			else
//				max = c;

		max = (a>b)?a:b;    //max is the highest btw a & b.
		max = (max>c)?max:c;

		printf("The highest value is %d.", max);
	}
	
}

