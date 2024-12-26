#include<stdio.h>

int main(){
	
	int i, j, R, C;
	
	printf("Enter Row :");
	scanf("%d",&R);
	
	printf("Enter Colum :");
	scanf("%d",&C);
	 
    int arr1[R][C];
    int arr2[R][C];
    int arr3[R][C];
		
	 
	
	for(i=0 ;i<R ;i++){
		
		for(j=0 ;j<C ;j++){
			 
			 printf("Arr[%d][%d] :",i , j);
			 scanf("%d",&arr1[i][j]);
			 
		}
		printf(" \n");	
	}
	
	for(i=0; i<R; i++){
		
		for(j=0; j<C; j++){
			
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	printf("*********** \n");
	for(i=0 ;i<R ;i++){
		
		for(j=0 ;j<C ;j++){
			 
			 printf("Arr[%d][%d] :",i , j);
			 scanf("%d",&arr2[i][j]);
			 
		}
		printf(" \n");	
	}
	
	for(i=0; i<R; i++){
		
		for(j=0; j<C; j++){
			
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	printf("*********** \n");
	

	for(i=0; i<R; i++){
		
		for(j=0; j<C; j++){
			
		    arr3[i][j] = arr1[i][j] + arr2[i][j];
	 
	        printf(" %d ",arr3[i][j]);	
		
		}
		printf("\n");
}
	
   int size = sizeof(arr3) / sizeof(arr3[0][0]) ;
	
	printf("  %d \n",size);
   	    
   	     	
   
	return 0;
}

