#include<stdio.h>

int main(){
	
	int i;
    int count =0;
    int num;
    
    printf("Enter your number:");
    scanf("%d",&num);
	    
    for(i = 2 ; i<num ; i++){  // 20%2 == 0  93%2 != 0 
    	if(num%i == 0){
    		count++;   // c=1
		}
	}
     if(count == 0){
     	printf("%d is prime number",num);
	 }
	 else{
	 	printf("%d is not prime number",num);
	 }
	return 0;
}
