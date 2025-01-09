#include<stdio.h>


void sum(a,b){
	
	printf("Addition of a & b : %d \n",a+b);
	
	sub(a,b);
}
void sub(a,b){
	
		printf("subtraction of a & b : %d \n",a-b);
		
	mult(a,b);	
}
void mult(a,b){
	
	printf("multiplication of a & b : %d \n",a*b);
	
	divide(a,b);
}
void divide(a,b){
	 
	printf("dividation of a & b : %d \n",a/b);
}


int main(){
	
	int a = 30;
	int b = 60;
	
	sum(a,b);
	

	
	
		
	return 0;
}
