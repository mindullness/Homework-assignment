#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

	printf("** Arrange names in alphabetical order **\n\n");

	char temp[8];
	char names[7][8] = {"George", "Albert", "Tina",
						"Xavier", "Roger", "Tim", "William"};
	
	printf("Names in original order: \n");
	for(int i=0; i<7; i++){

		printf(" - %s\n", names[i]);
	}
	
	for(int i=0; i<6;i++){
		for(int j=i+1; j<7;j++){
			
			if(strcmp(names[i],names[j]) > 0){
				
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
	printf("\nNames after arrangement: \n");
	for(int i=0; i<7; i++){

		printf(" - %s\n", names[i]);
	}
	return 0;
}
