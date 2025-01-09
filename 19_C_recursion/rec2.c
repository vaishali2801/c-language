#include<stdio.h>

int rec(n){ //4
	
	return n*rec1(n-1); //4*rec1(3)  4*6==24
}
int rec1(n){    //3
	
	return n*rec2(n-1);  //3*rec2(2) 3*2==6
}
int rec2(n){   // 2
	
	return n*rec3(n-1);  //2*rec3(1)  2*1==2
}
int rec3(n){ //1
	
	return 1;
}


int main(){
	
	printf("factorial is : %d",rec(4));
	return 0;
}
