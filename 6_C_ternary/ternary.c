#include<stdio.h>

int main(){
	
	int opt;

	printf("press 1 for Galeto \n");
	printf("press 2 for candy \n");
	printf("press 3 for Vanilla ice cream \n");
	printf("press 4 for castard \n");
	printf("press 5 for Sorbet \n");
	
	printf("enter your option: ");
	scanf("%d",&opt);
	
	opt == 1 ? 
	    printf("your order is galeto")
	: opt == 2 ?     
	    printf("your order is candy")
	: opt == 3 ? 
	    printf("your order is Vanilla ice cream")
	: opt == 4 ? 
	    printf("your order is Castard")
	: opt == 5 ? 
	    printf("your order is Sorbet")
	: 
	    printf("Enter invalid number");    
	    
	    
	return 0;
}
