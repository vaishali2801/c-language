#include<stdio.h>

int main(){
	
	int i,start_year,end_year;
	
	int arr[50];
	
	printf("Enter start year :");
	scanf("%d",&start_year);
	
	printf("Enter end year :");
	scanf("%d",&end_year);
	
	int size = 0;
	
	for(i=start_year ; i<=end_year ;i++){
		 
		if(i%4==0){
			 arr[size] = i ;
			 
			 size++;
		}	
	}
	    printf("leap year = { ");
	    for(i=0 ;i<size ;i++){
	    	
	    	printf("%d ,",arr[i]);
		}	
	printf(" }");
	return 0;
}
