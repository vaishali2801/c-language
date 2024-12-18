#include<stdio.h>

int main(){
//	int a =13;
//	int b =24;
	
//	printf("A:");
//	scanf("%d",&a);
	
//  printf("B:");
//	scanf("%d",&b);
	
//	if(a > b){
//		printf("a is big");
//	}
//	else if(b > a){
//		printf("b is big");
//	}
//	else{
//		printf("a & b are equal");
//	}

 int order;
  
   printf("Enter 1 for tv \n");
   printf("Enter 2 for LED \n");
   printf("Enter 3 for LCD \n");
   printf("Enter 4 for Smart phone \n");
   printf("Enter 5 for Smart watch \n");
   
   printf("order:");
   scanf("%d",&order);
   
   if(order == 1){
   	printf("you order tv");
   }
   else if(order == 2){
   	printf("you order LED");
   }
   else if(order == 3){
   	printf("you order LCD");
   }
   else if(order == 4){
   	printf("you order smart phone");
   	}
   else if(order == 5){
   	printf("you order smart watch");
   }
   else{
   	printf("envalid number");
   }
   return 0;

}
