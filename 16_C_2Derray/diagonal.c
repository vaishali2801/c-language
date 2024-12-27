#include<stdio.h>

int main(){
	
	int i,j;
	
	int arr[5][5] = { {11,12,13,14,15},
	                  {16,17,18,19,20}, 
	                  {21,22,23,24,25}, 
	                  {26,27,28,29,30}, 
	                  {31,32,33,34,35}, 
					};
					
   					         // print diagonal & antidiagonal element
		for(i=0; i<5; i++){
		    for(j=0; j<5; j++){
				if(i==j||i+j == 5-1){
					printf("%d",arr[i][j]);
				}
				else{
					printf("  ");
				}
			
			}
				printf("\n");
		}
						
	

	
	  	
	return 0;
}
