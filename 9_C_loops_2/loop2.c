#include<stdio.h>

int main(){
	
	
	int num;
	printf("Enter number to find factorial :");
	scanf("%d",&num);
	
	int fact = 1;
	
	int i = 1;
	while(i<=num){
		fact = fact*i;
		
		i++;
	}
	printf("factorial of %d is :%d ",num,fact);
	
	return 0;
		}

