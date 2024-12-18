#include<stdio.h>

int main(){
	
	int A, B ,opt;
    
    printf("Enter A:");
    scanf("%d", &A);
    
    printf("Enter B:");
    scanf("%d", &B);
    
	printf("enter your operation:");
	scanf("%d",&opt);

	if(opt == 1){
		printf("Sum is = %d \n",A+B);
	}
	else if(opt == 2){
		printf("subtraction is = %d  \n",A-B);
	}
	else if(opt == 3){
	    printf("Multiplication is = %d \n",A*B);
	}
	else if(opt == 4){
		printf("mode is  = %d \n",A%B);
	}
	else if(opt == 5){
		printf("dividation is = %d",A/B);
	}
	else{
		printf("Enter invalid number");
	}
	
	
	
	
  return 0;	
	
}
