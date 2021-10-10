#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	int n;
	printf("Multiplication table of ");
	scanf("%d", &n);
	
	for(int i=1; i<=10; i++) {
		printf("%3d  * %2d = %3d \n", n, i, n*i);
	}

}

