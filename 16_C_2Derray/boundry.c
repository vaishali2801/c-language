#include<stdio.h>

int main(){
	
	int i,j;
	
	int arr[5][5] = { {11,12,13,14,15},
	                  {16,17,18,19,20}, 
	                  {21,22,23,24,25}, 
	                  {26,27,28,29,30}, 
	                  {31,32,33,34,35}, 
					};
									
		for(i=0; i<5; i++){
		    for(j=0; j<5; j++){
			    if(i==0 || j==0 ||i==4||j==4){
			    	printf(" %d",arr[i][j]);
				}
				else{
					printf("   ");
				}		
			}
			printf(" \n");
		}
		
	    

	
	  	
	return 0;
}
