#include<stdio.h>

int rec(n){
	
	if(n==1){
		return 1;
	}
	return n*rec(n-1);
}



int main(){
	
    int n;
    printf("Enter number:");
    scanf("%d",&n);
	printf("factorial is :%d",rec(n));
	
		
	return 0;
}
