#include<stdio.h>


void sum(n){
	int i;
	int sum = 0;
	
	for(i=1 ; i<=n ;i++){
		sum += i;
	}	
	printf("sum is : %d \n",sum);
	avg(sum,n);
}
void avg(sum,n){
	
	int avg = sum/n;
	
	printf("avg : %d \n",avg);

}


int main(){
	
	int n = 15;
	
    sum(n);
	
	
		
	return 0;
}
