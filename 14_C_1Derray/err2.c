#include<stdio.h>

int main(){
             // for all element print
  int i;
  
  int id[4] = {6,5,9};
  
  int avg;
  
  int sum = 0;
  
  for(i=0 ; i<3 ;i++){
  	
//  	 printf(" %d  ,",id[i]);
  	  sum += id[i];
  }
  
  avg = sum/(sizeof(id)/sizeof(i)); 
  
  printf("sum : %d \n",sum);
  
  printf("avg : %d \n",avg);
  
  printf("%d \n",sizeof(id));
  
  printf("%d",sizeof(i));

 return 0;
 
}
