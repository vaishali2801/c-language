#include<stdio.h>
 
 int main(){
 	
 	int salary,HRA,DA,TA,HRAamount,DAamount,TAamount;
 	
 	printf("my salary: ");
 	scanf("%d",&salary);
 	
 	printf("HRA:");
 	scanf("%d",&HRA);
 	
 	printf("DA:");
 	scanf("%d",&DA);
 	
 	printf("TA:");
 	scanf("%d",&TA);
 	
 	HRAamount = HRA*salary/100;
 	DAamount = DA*salary/100;
 	TAamount = TA*salary/100;
 	
 	int grosssalary = salary+HRAamount+DAamount+TAamount;
 	
 	
 	printf("%d",grosssalary);
 	
 	
 	
 }
