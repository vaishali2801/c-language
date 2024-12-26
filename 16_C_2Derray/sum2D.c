#include<stdio.h>

int main(){
	
	int i, j, R, C;
	
	printf("Enter Row :");
	scanf("%d",&R);
	
	printf("Enter Colum :");
	scanf("%d",&C);
	 
    int arr[R][C];
	
	int size = sizeof(arr) / sizeof(arr[0][0]) ;
	
	printf("%d \n",size);	 
	
	for(i=0 ;i<R ;i++){
		
		for(j=0 ;j<C ;j++){
			 
			 printf("Arr[%d][%d] :",i , j);
			 scanf("%d",&arr[i][j]);
			 
		}
		printf(" \n");
			
	}
	
	for(i=0; i<R; i++){
		
		for(j=0; j<C; j++){
			
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	 int sum =0;
    for(i=0 ; i < R ;i++){
    	for(j=0 ; j < C ;j++){
    		
    		sum = sum+ arr[i][j];
    		
		}
	}
	
	printf("sum : %d \n",sum);
	
   int avg = sum / size;
	
	printf("avg : %d",avg);
 
 
 
	
	return 0;
}
