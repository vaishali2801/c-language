#include<stdio.h>

int main(){
	
	int first_angle,second_angle,third_angle;
	
	printf("Enter first angle:");
	scanf("%d",&first_angle);
	
	printf("Enter second angle:");
	scanf("%d",&second_angle);
	
	third_angle = 180 - (first_angle+second_angle);
	
	printf("third angle is :%d",third_angle);
	
	
	
	return 0;
}
