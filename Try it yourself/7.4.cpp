#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	
	printf("*** This program is about to Calculate the salary of a Montek's employee at the end of the month ***\n");

/*Grade: A:300		B:250		Others:100 */
	float salary;
	int alw; // alw: allowance
	char grade;
	
	printf("\nInput the basic salary of the employee: $");
	scanf("%f", &salary);
	fflush(stdin);
	
	printf("Input the grade of the employee: ");
	grade = getchar();
	
	switch(grade){
		case 'A':
		case 'a':
			alw = 300;
			break;
		case 'B':
		case 'b':
			alw = 250;
			break;
		default:
			alw = 100;
			break;
	}
	salary += alw;
	printf("\nThe employee's salary at the end of this month is: $%.2f (included an $%d allowance).", salary, alw);
}

