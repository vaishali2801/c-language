#include<stdio.h>

int main(){
 
   int i,size;
 
   printf("size :");
   scanf("%d",&size);
   
   int gim[size];
   
   for(i=0 ; i<size ;i++){
   	
   	    printf("gim[%d] :",i);
   	    
		scanf("%d",&gim[i]); 
		     	
   }
    int sum = 0;
    
    for(i=0 ;i<size ;i++){
    	sum = sum+ gim[i];
	}
	
	printf("sum : %d \n",sum);
	
    int avg = sum / size;
	
	printf("avg : %d",avg);
 
 
 
 return 0;
}
