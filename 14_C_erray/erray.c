#include<stdio.h>

int main(){
  
//   int a;

    int gim[6] = {5,8,3,6,3,2};
//   printf("%d",sizeof(a));
    gim[0] = 9;
    int avg[3] = {4,6,8};
    
    printf(" avg[2] :%d \n",avg[2]);
    
    printf(" gim[3] :%d \n",gim[3]);
 
    printf(" gim[0] :%d \n",gim[0]);
    
    printf("  %d \n",sizeof(gim));
    
    printf("  %d ",sizeof(avg));

 return 0;
}
