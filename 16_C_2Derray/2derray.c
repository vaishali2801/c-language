#include<stdio.h>

int main(){


	int arr[3][3] = {  { 9, 8, 7 } ,
	                   { 6, 5, 4 } ,
	                   { 3, 2, 1 }
	                };
	
    int i,j;
    
    for(i=0 ; i<3 ;i++){
    	
    	for(j=0 ; j<3 ;j++){
    		
    		printf(" %d ", arr[i][j]);
		}
    	printf("\n");
	}
		int size = sizeof(arr) / sizeof(arr[0]);    
    
    printf(" size : %d",size);
	
	return 0;
}
