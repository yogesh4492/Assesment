#include<stdio.h>
int main(){
	int Pizza=180,Burger=100,Dosa=120,Idli=50;
	int Choice,Amount,qty,gt=0;
	up:
	printf("\n 1. Pizza     Price=%d Rs/Pcs",Pizza);
	printf("\n 2. Burger    Price=%d Rs/Pcs",Burger);
	printf("\n 3. Dosa      Price=%d Rs/Pcs",Dosa);
	printf("\n 4. Idli      Price=%d Rs/Pcs",Idli);
	printf("\n ");
	printf("\n Please Enter Your Choose...:");
	scanf("%d",&Choice);
	printf("\n ");
	switch(Choice){
		case 1:
			printf("\n You have selected Pizza.");
			printf("\n");
			Amount=Pizza;
			break;
		case 2:
			printf("\n You have selected Burger.");
			printf("\n");
			Amount=Burger;
			break;
		case 3:
			printf("\n You have selected Dosa.");
			printf("\n");
			Amount=Dosa;
			break;
		case 4:
			printf("\n You have selected Idli.");
			printf("\n");
			Amount=Idli;
			break;
		default:
			printf("\n Invalid Input.");
			printf("\n Please Try Again.");
			printf("\n");
			goto up;
			
			
	}
	printf("\n  Enter the Quantity..:");
	scanf("%d",&qty);
	Amount=Amount*qty;
	printf("\n Amount =%d",Amount);
	printf("\n");
	gt=gt+Amount;
	printf("\n Total Amount=%d",gt);
	
	char choice1;
	printf("\n");
	printf("\n Do You Want To Place More Orders ? y /n ..:");
	scanf(" %c",&choice1);
	if(choice1=='y'||choice1=='Y'){
		printf("\n ---------------------Manu-----------------------");
		printf("\n");
		goto up;
	}
	printf("\n -----------------------------------------------------------------------");
	printf("\n Your Order Is Completed");
	printf("\n");
	printf("\n Have a Nice Day.");
	
	return 0;
}
