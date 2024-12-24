#include<stdio.h>

int main(){
	
	int i,j;
	for(i=1; i<=5 ; i++){      // i=1 j=1 op=1 ,i=1 j=2 op=1,i=1 j=3 op=1, i=1 j=4 op=1,i=1 j=5 op=1
	                           // i=2 j=1 op=2, i=2 j=2 op=2,i=2 j=3 op=2, 
		for(j=1 ; j<=5 ;j++){  // i=3 j=1 op=3,i=3 j=2 op=3
		                       // i=4 j=1 op=4,i=4 j=2 op=4
		                       // i=5 j=1 op=5
			
			printf("%d ",i);  // when enter i output is row wise
		}
		
		printf("\n");
	}
	printf("---------------\n");
	
	for(i=1; i<=5 ; i++){   // i=1 j=1 op=1,i=1 j=2 op=2,i=1 j=3 op=3,i=1 j=4 op=4,i=1 j=5 op=5
	                            // i=2 j=1 op=1 	
		for(j=1 ; j<=5 ; j++){
			printf("%d ",j); 	 //when enter j op is colum wise
			
		}
		
	printf("\n");	
		
	}
	printf("---------------\n");
	
	for(i=1; i<=5 ; i++){    // i=1 j=1 op= 1
	                         // i=2 j=1 op=1,i=2 j=2 op=2
	 	                      // i=3 j=1 op=1,i=3 j=2 op=2,i=3 j=3 op=3
		for(j=1 ; j<=i ; j++){
			
			printf("%d ",j); 	 
			
		}
		
	printf("\n");	
		
	}
	printf("---------------\n");
	for(i=1; i<=5 ; i++){    // i=1 j=1 op= 1
	                          // i=2 j=1 op=2,i=2 j=2 op=2
		for(j=1 ; j<=i ; j++){ // i=3 j=1 op=3,i=3 j=2 op=3,i=3 j=3 op=3
			
			printf("%d ",i); 	 
			
		}
		
	printf("\n");	
		
	}
	printf("---------------\n");
	for(i=1; i<=5 ; i++){    // i=1 j=1 op=1,i=1 j=2 op=1,i=1 j=3 op=1,i=1 j=4 op=1,i=1 j=5 op=1
	                          // i=2 j=2 op=2,i=2 j=3 op=2, i=2 j=4 op=2, i=2 j=5 op=2 
		 for(j=i ; j<=5 ; j++){ // i=3 j=3 op=3,i=3 j=4 op=3,i=3 j=5 op= 3
			
			printf("%d ",i); 	 
			
		}
		
	printf("\n");	
		
	}
	printf("---------------\n");
	
		for(i=1; i<=5 ; i++){    // i=1 j=1 op=1,i=1 j=2 op=2,i=1 j=3 op=3,i=1 j=4 op=4,i=1 j=5 op=5
	                          // i=2 j=2 op=2,i=2 j=3 op=3, i=2 j=4 op=4, i=2 j=5 op=5 
		 for(j=i ; j<=5 ; j++){ // i=3 j=3 op=3,i=3 j=4 op=4,i=3 j=5 op= 5
			
			printf("%d ",j); 	 
			
		}
		
	printf("\n");	
		
	}
	printf("---------------\n");
	
	return 0;
	}
