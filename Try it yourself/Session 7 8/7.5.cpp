#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	printf("*** This program is about to Evaluate the Grade of a student ***\n");

	int marks;
	do{
		printf("Enter the marks(0-100) of the student: ");
		scanf("%d", &marks);
	}while(marks < 0 || marks > 100);
	
	if(marks > 75)
		printf("\n- grade A");
	else if(marks > 60)
		printf("\n- grade B");
	else if(marks > 45)
		printf("\n- grade C");
	else if(marks > 35)
		printf("\n- grade D");
	else
		printf("\n- grade E");
}
