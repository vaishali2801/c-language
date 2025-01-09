#include<stdio.h>

// TSRS - take somthing return somthing

int sum(n){
	int i,j;
	int sum = 0;
	
	for(i=0 ; i<5 ;i++){
		for(j=0 ; j<5 ;j++){
			sum += i;
		}
		
	}
  return sum;
}

int main(){

	int n = 10;
     
    sum(n); 
    
    printf("sum is : %d \n",sum());
    
    int avg = sum(n)/n;
    
    printf("avg is : %d",avg);
 
	return 0;
}
