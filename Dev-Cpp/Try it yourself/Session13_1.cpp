#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	char dx[80];
	int flag=1;
	
	printf("Input a string: ");
	scanf("%[^\n]", dx);
	int len = strlen(dx);
	
	for(int i=0; i<len ; i++){
		if(dx[i] != dx[len-1-i]){
			flag = 0;
			break;
		}
	}
	
	if(flag == 1)
		printf("\nThis string: %s, is a palindrome. ", dx);
	else
		printf("\nThis string: %s, is NOT a palindrome.", dx);
}

