#include<stdio.h>

int main(){
	
	int r;
	float V;
	
	printf("Enter radius:");
	scanf("%d",&r);
	
	V = (1.33)*3.14*(r*r*r);
	
	printf("your volume is : %f",V);
	
	
	return 0;
}
