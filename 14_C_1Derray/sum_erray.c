#include<stdio.h>

int main(){
  
  int i,size;
 
   printf("size :");
   scanf("%d",&size);
   
   int gim1[size];
   int gim2[size];
   int gim3[size];
   
   for(i=0 ; i<size ;i++){
   	
   	    printf("gim1[%d] :",i);
   	    
		scanf("%d",&gim1[i]); 
		     	
   }
   
   for(i=0 ; i<size ;i++){
   	
   	    printf("gim2[%d] :",i);
   	    
		scanf("%d",&gim2[i]); 
		     	
   }
   
   printf("gim3[%d] = {", size );
   
   
   for(i=0 ; i<size ;i++){
   	
   	    gim3[i] = gim1[i] + gim2[i];
   	   
   	    printf("%d ,", gim3[i]);
		     	
   }
     printf(" }");
   
 return 0;
}
