#include<stdio.h>

// TNRS - take nothing return somthing

int take_nothing(){
	
	return 60;
}
int take_somthing(){
	
	return 80;
}

int main(){

	int n = 10;
	
	take_nothing();
	take_somthing();
	
	printf("sum is : %d ",take_nothing() + take_somthing());
	
	return 0;
}
