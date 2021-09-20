#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** Count the number of vowels in a line of text **\n\n");

	int count=0;
	char text[81];
	do{

		printf("Text here (within 80 characters): ");
		gets(text);
	}while(strlen(text)>80);
	
	for(int i=0; i< strlen(text); i++){
		
		switch(text[i]){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				count++;
				break;
			default:
				break;
		}
	}
	printf("\nTotal vowels in the given text is: %d", count);
}
