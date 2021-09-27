#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cmath>
void s19_1();
//void s19_2();
//void s20_partII();
//void s20_1();
//void s20_2();
int main(){
	

	while(1){

		printf("\n\t  *** MENU ***\n\n");
		printf("Press (1) Run Session 19 - p310. TIY 19.1\n");
//		printf("Press (2) Run Session 19 - p310. TIY 19.2\n");
//		printf("Press (3) Run Session 20 - p. Part II (For the next 30 minutes)\n");
//		printf("Press (4) Run Session 20 - p. TIY 20.1\n");
//		printf("Press (5) Run Session 20 - p. TIY 20.2\n");
		printf("Press (6) Exit \n");
		printf("Press: ");
		char op = getche();

		switch(op){
			case '1':
				s19_1();
				break;
//  			case '2':
//				s19_2();
//				break;
//			case '3':
//				s19_partII();
//				break;
//			case '4':
//				s20_1();
//				break;
//			case '5':
//				s20_2();
//				break;
			case '6':
				exit(0);
		}
	}

}
// 19.1
struct inventory{
	char IDnum[10];
	char name[21];
	float rate;
	int quantity;
	float price;
};
void display1(); // Display the details of 5 items.
void display2(); // Display the item name and its total price.
void display3(); // Display the grand total value of the inventory.
float getPrice(int quantity, float price);
struct inventory items[5];
void s19_1(){
	
	for(int i=0; i<5 ; i++){

		printf("\nItem %d:\nID number: ", i+1); gets(items[i].IDnum);
		printf("Input Name: "); gets(items[i].name);
		do{
			printf("Input Rate (0 - 5): "); scanf("%f", &items[i].rate);
		}while(items[i].rate<0 || items[i].rate>5);
		do{
			printf("Input Quantity: "); scanf("%d", &items[i].quantity);
		}while(items[i].quantity<0);
		do{
			printf("Input Single price: "); scanf("%f", &items[i].price);
		}while(items[i].price<0);
		fflush(stdin);
	}
	while(1){

		printf("\n\tPress (1) to Display the details of each of 5 items.");
		printf("\n\tPress (2) to Display the item name and its total price.");
		printf("\n\tPress (3) to Display the grand total value of the inventory.");
		printf("\n\tPress (4) to Quit Displaying.\n\tPress: ");
		int op = getche();

		switch(op){
				case '1':
					display1(); // Display the details of 5 items.
					break;
	  			case '2':
					display2(); // Display the item name and its total price.
					break;
				case '3':
					display3(); // Display the grand total value of the inventory.
					break;
				case '4':
					exit(0);
			}
	}
}
void display1(){ // Display the details of 5 items.
	printf("\n\t*** The details of 5 items in the inventory ***");
	for(int i=0; i<5 ; i++){
		
		printf("\nItem %d:\n\tID number: %s.\n", i+1, items[i].IDnum);
		printf("\tName: %s.\n", items[i].name);
		printf("\tRate: %.1f.\n", items[i].rate);
		printf("\tQuantity: %d.\n", items[i].quantity);
		printf("\tSingle price: %.2f\n", items[i].price);
	}
}
void display2(){ // Display the item name and its total price.
	for(int i=0; i<5 ; i++){
		float totalprice = getPrice(items[i].quantity, items[i].price);
		printf("\nTotal price of the item %s: $%4.2f.\n", items[i].name, totalprice);
	}
}
void display3(){ // Display the grand total value of the inventory.
	float sum=0.0;
	for(int i=0;i<5;i++){
		sum+=getPrice(items[i].quantity, items[i].price);
	}
	printf("\n\n>> The Grand Total Value of this Inventory is: $%.2f.\n", sum);
}
float getPrice(int quantity, float price){
	
	return price*quantity;
}

