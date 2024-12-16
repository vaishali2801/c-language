#include<stdio.h>

int main(){
	int firstangle,secondangle,thirdangle;
	
	printf("firstangle is:");
	scanf("%d",&firstangle);
	
	printf("secondangle is:");
	scanf("%d",&secondangle);
	
	thirdangle = 180 - (firstangle+secondangle);
	
	printf("%d",thirdangle);
}
