#include<stdio.h>

int main(){
	
	int digit;
	int sum;
	printf("Enter your digit:");
	scanf("%d",&digit);
	
	int last_digit= digit%10; // 789%10  number diveded by 10 answer is last digit
	
	while(digit>=9){
		
		digit = digit/10; // 789/10 == 78 78/10 == 7 
	}
	
	sum = last_digit + digit;
	
	printf("first & last digit sum is: %d",sum);
	
	
	return 0;
}
