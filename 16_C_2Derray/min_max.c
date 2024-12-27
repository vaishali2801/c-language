#include<stdio.h>

int main(){
	
	int i,j;
	
	int arr[5][5] = { {11,12,13,14,15},
	                  {16,17,18,19,20}, 
	                  {21,22,23,24,25}, 
	                  {26,27,28,29,30}, 
	                  {31,32,33,34,35}, 
					};
					
   	
	int min = arr[0][0];
	int max = 0;				
		for(i=0; i<5; i++){
		    for(j=0; j<5; j++){
				if(max < arr[i][j]){
						max = arr[i][j];
				}
				
				if(min > arr[i][j]){
					min = arr[i][j];
				}
			}
		}
		
		printf("largest : %d \n", max);
		printf("smallest : %d \n", min);				
	

	
	  	
	return 0;
}
