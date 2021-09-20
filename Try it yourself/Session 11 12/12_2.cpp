#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** Count the number of vowels and the number of consonants in a word \n\n**");

	int count=0;
	char word[20];
	
	printf("Enter a word: ");
	scanf("%[^ \n]s", word);
	
	for(int i=0; i<strlen(word);i++){

		switch(word[i]){
			
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
	printf("\nThe number of vowels in the word \"%s\": %d.",word, count);
}
