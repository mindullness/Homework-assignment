#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** Count the number of vowels and the number of consonants in a word \n\n**");

	int countV=0, countC=0;
	char word[20];
	
	printf("Enter a word: ");
	scanf("%[^ \n]s", word);
	
	int n = strlen(word);
	// Style using strchr()
	char vowels[] = "ueoaiUEOAI";
	for(int i=0; i<n ; i++){
		if((word[i]>='A'&& word[i]<='Z') || (word[i]>='a'&& word[i]<='z')){

			if(strchr(vowels, word[i]))
				countV++;
			else
				countC++;
		}
	}
	

	printf("\nThe number of vowels in the word \"%s\": %d.",word, countV);
	printf("\nThe number of consonants in the word \"%s\": %d.",word, countC);
	
// Style switch:
//	for(int i=0; i<n ;i++){
//		switch(word[i]){
//			case 'A':
//			case 'a':
//			case 'E':
//			case 'e':
//			case 'I':
//			case 'i':
//			case 'O':
//			case 'o':
//			case 'U':
//			case 'u':
//				count++;
//				break;
//			default:
//				break;
//		}
//	}
}
