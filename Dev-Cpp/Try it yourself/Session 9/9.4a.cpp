#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("This program is to Display a numeric triangle.\n");

	int h; // h: height.
	do{
		printf("Enter the height of the triangle: ");
		scanf("%d", &h);
	}while(h<=0);

	for(int i=1; i<=h; i++){
		for(int j=1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
}
