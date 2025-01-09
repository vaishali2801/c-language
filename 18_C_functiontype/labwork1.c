#include<stdio.h>

void array(i,sum){
	int size;
	
	int arr[size];
	
	printf("Enter array size: ");
	scanf("%d",&size);
	
    for(i=0 ; i<size ;i++){
   	    printf("arr[%d] :",i);
		scanf("%d",&arr[i]); 	     	
   }
	for(i=0 ; i<size ;i++){
  	         sum += arr[i];
  	    }
    	printf("The sum of an Array: %d",sum);
}
int main(){
	
	int sum =0;
	int i;
	array(i,sum);
	
	return 0;
}
