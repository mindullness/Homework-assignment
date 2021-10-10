#include <stdio.h> // Thu vien ham in an/ nhap xuat chuan
#include <stdlib.h> //Thu viencap phat bo nho chuan
#include <string.h> // Thu vien ham lien quan den xu ly chuoi van ban
#include <cmath>
int main(){
	
	printf("*** This program is about to display the values of x and y if you guess it right! ***\n");
	
    char letter;
    printf("Input a letter displaying the language: ");
    scanf("%c", &letter);
    
    if(letter >= 'A' && letter <='Z')
    	letter += 'a'-'A';
    putchar('\n');
    switch (letter)
    {
    	case 'a':
    		printf("Ada");
    		break;
    	
    	case 'b':
    		printf("Basic");
    		break;
    	case 'c':
    		printf("COBOL");
    		break;
    	case 'd':
    		printf("dBASE III");
    		break;
    	case 'f':
    		printf("Fortran");
    		break;
    	case 'p':
    		printf("Pascal");
    		break;
    	case 'v':
    		printf("Visual C++");
    		break;
    	default:
    		printf("Invalid input!");
    		break;
	}
	
}
