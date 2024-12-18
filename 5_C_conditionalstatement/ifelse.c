#include<stdio.h>

int main(){
	
	int a ,b ,c;
	
	printf("enter a:");
	scanf("%d",&a);
	
	printf("enter b:");
	scanf("%d",&b);
	
	printf("enter c:");
	scanf("%d",&c);
	
	if( a > b){
		if( a > c){
			printf("a is big");
		}
		else{
			printf("c is big");
		}
	}
	if( b > a){
		if( b > c){
			printf("b is big");
		}
		else{
			printf("c is big");
		}
			
	}
		
}
