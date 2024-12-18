#include<stdio.h>

int main(){
	
	int num;
	int count=0;
	
	printf("Enter your digit:");
	scanf("%d",&num);
    
	

	
	while(num > 0){  
		
		num = num/10; // 7777/10 == 777  777/10 == 77  77/10==7  7/10==0
		
		count++;  // c= 1 c=2 c=3 c=4
	}
	printf("digit is:%d",count);
	
	
	return 0;
}
