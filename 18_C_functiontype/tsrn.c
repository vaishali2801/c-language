#include<stdio.h>

// TSRN - take somthing return nothing

void pattern(){
	
	int i,j;
	
	for(i=1 ;i<=5 ;i++){
		
		for(j=i ;j<=5 ;j++){
			
			printf(" %d",j);
		}
		printf("\n");
	}
	
}




int main(){

	int n = 5;
	
	pattern(n);
	
	return 0;
}
