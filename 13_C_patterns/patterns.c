#include<stdio.h>

int main(){
	
	int i,j,k;
	
	for(i=1; i<=5 ;i++ ){
		
		for(k=i ; k<=5 ;k++){ // i=1 k=1 op=-- i=1 k=2 op=-- i=1 k=3 op=-- i=1 k=4 op=-- i=1 k=5 op=--   
			printf("  ");     // i=2 k=1 op=-- i=2 k=2 op=-- i=2 k=3 op=-- i=2 k=4 op=--
		}
		
		for(j=1 ;j<=i ;j++){  // j=1 i=1 op=1 newline 
			printf("%d ",j);  // j=1 i=2 op=1 j=2 i=2 op=2 newline
		}
		
		  printf("\n");
	}
	printf("-------------------\n");
	
	for(i=1 ; i<=5 ; i++){
		
		for(k=i ; k<=5 ;k++){
			printf(" ");
		}
		
		for(j=1 ; j<=i ; j++){
			printf("%d ",j);
		}
		 printf("\n");
	}
	printf("-------------------\n");
	

		for(i=1; i<=5; i++){  //i=1 k=1 j=1 op=1 new 
		
		  for(k=1; k<i; k++){ //i=2 k=1 op=-- 
			printf("  ");
		}
		
		for(j=i; j<=5; j++){ // i=2 k=1 j=2 op=2 ,j=3 op=3, j=4 op=4 ,j=5 op=5
			printf("%d ", j);
		}
		printf("\n");
		
      }
    printf("-------------------\n");
      
	for(i=1; i<=5; i++){
		
		for(j=i; j<=5; j++){ //i=1 j=1 op=1 j=2 op=2 op=3 op=4 op=5 
			printf("%d ", j);
		}
		
		for(k=1; k<i ;k++){ // k=1 i=1 
			printf("  ");
		}
		
			for(k=1; k<i ;k++){ // k=1 i=1 
			printf("  ");
		}
		
			for(j=5; j>=i; j--){ // i=1 j=5 op=5 i=1 j=4 op=4 op=3 op=2 op=1
			printf("%d ", j);
		}
		   printf("\n");
	}
	for(i=1; i<=5; i++){
		
		
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		
		for(k=i; k<5; k++){
			printf("  ");
		}
		
			
		for(k=i; k<5; k++){
			printf("  ");
		}
		
		for(j=i; j>=1; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	
	
		printf("-------------------\n");
	
		for(i=1; i<=5; i++){
			
			for(k=i; k<5; k++){
			printf("  ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		
		for(j=i; j>=1; j--){
			printf("%d ", j);
		}
					
		for(k=i+1; k<5; k++){
			printf("  ");
		}
		
		printf("\n");
	}
	printf("-------------------\n");
	
		
      
      
      
	return 0;
}
