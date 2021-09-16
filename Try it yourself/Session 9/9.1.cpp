#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("This program is to print the series 100, 95 , 90, 85,....., 5.\n");
	
	for(int i=100, j=0; i>5; i-=5,j++){
		if(j==4){
			printf("\n");
			j=0;
		}
		printf("%3d, ", i);
	}
	printf("%3d.", 5);
	
}

