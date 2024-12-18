#include<stdio.h>
int main(){
	
	int choice;
	
	printf("------------MENU------------ \n");
	printf("Enter 1 for vanilla ice cream \n");
	printf("Enter 2 for raspberry ice cream\n");
	printf("Enter 3 for Strawberry Ice Cream \n");
	printf("Enter 4 for Oreo Ice Cream \n");
	printf("------------------------------ \n");
	
	printf("Enter your favorite ice cream :");
	scanf("%d",&choice);
	
	switch(choice){
		            case 1 : printf("your order is vanilla ice cream \n");
		                                    printf("------- gram------- \n");
										 	printf("press 1 for 250gm \n");
										 	printf("press 2 for 500gm\n");
											printf("press 3 for 1000gm \n");
										 	printf("------------------- \n");
											 	int gm;
											 	
											 	printf("how much you order: ");
											 	scanf("%d", &gm);
											 	
											 	if(gm==1){
											 		printf("your order 250gm ice cream \nthank you for your order");
												 }
												 else if(gm==2){
												 	printf("your order  500gm ice cream \nthank you for your order");
												 }
												 else if(gm==3){
												 	printf("you order 1000gm ice cream \nthank you for your order");
												 }
												 else {
												 	printf("not available");
											}
		                 break ;
		            case 2 : printf("your order is raspberry ice cream \n");
		                                    printf("------- gram------- \n");
										 	printf("press 1 for 250gm \n");
										 	printf("press 2 for 500gm\n");
											printf("press 3 for 1000gm \n");
										 	printf("------------------- \n");
											 	int opt;
											 	
											 	printf("how much you order: ");
											 	scanf("%d", &opt);
											 	
											 	if(opt==1){
											 		printf("your order 250gm ice cream \nthank you for your order");
												 }
												 else if(opt==2){
												 	printf("your order  500gm ice cream \nthank you for your order");
												 }
												 else if(opt==3){
												 	printf("you order 1000gm ice cream \nthank you for your order");
												 }
												 else {
												 	printf("not available");
												 }
		            
		            
		                 break ;
		            case 3 : printf("your order is Strawberry Ice Cream\n");
		                                    printf("------- gram------- \n");
										 	printf("press 1 for 250gm \n");
										 	printf("press 2 for 500gm\n");
											printf("press 3 for 1000gm \n");
										 	printf("------------------- \n");
											 	int opt2;
											 	
											 	printf("how much you order: ");
											 	scanf("%d", &opt2);
											 	
											 	if(opt2==1){
											 		printf("your order 250gm ice cream \nthank you for your order");
												 }
												 else if(opt2==2){
												 	printf("your order  500gm ice cream \nthank you for your order");
												 }
												 else if(opt2==3){
												 	printf("you order 1000gm ice cream \nthank you for your order");
												 }
												 else {
												 	printf("not available");
												 }
		                 break ;
		            case 4 : printf("your order is Oreo Ice Cream \n");
					                        printf("------- gram------- \n");
										 	printf("press 1 for 250gm \n");
										 	printf("press 2 for 500gm\n");
											printf("press 3 for 1000gm \n");
										 	printf("------------------- \n");
											 	int opt3;
											 	
											 	printf("how much you order: ");
											 	scanf("%d", &opt3);
											 	
											 	if(opt3==1){
											 		printf("your order 250gm ice cream \nthank you for your order");
												 }
												 else if(opt3==2){
												 	printf("your order  500gm ice cream \nthank you for your order");
												 }
												 else if(opt3==3){
												 	printf("you order 1000gm ice cream \nthank you for your order");
												 }
												 else {
												 	printf("not available");
												 }
		                 break ;
		            default : printf("choose valid choice");
		                 break ;     
	}	
  return 0;	
}

