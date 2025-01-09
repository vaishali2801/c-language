#include<stdio.h>

void cubeof(int num,int cube ){
	
	printf("Enter an Integer: ");
	scanf("%d",&num);
	
	cube = num*num*num;
	
	printf("cube od %d is : %d",num,cube);
	
}

int main(){
	
   int num,cube;
   
   cubeof(num,cube);	
	
	return 0;
}
