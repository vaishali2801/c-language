#include<stdio.h>

int main(){
	
	int digit; 
	int sum;
	int last_digit = digit%10;
	
	printf("Enter your digit:");
	scanf("%d",&digit);

	while(digit>=9){
		
		digit = digit/10;
		
	}
	sum = digit + last_digit;
	
	printf("your sum is: %d",sum);
	
	
	return 0;
}
