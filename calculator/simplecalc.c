#include<stdio.h>

int main(){
	
	int A,B,C,D,E,F,num;
	
	printf("Enter your mark:");
	scanf("%d",&num);
	
	if(num >= 85){
        printf(" You got A grade,Excellent work! You are eligible for the next exam"); 
    }
    else if (num >= 70){ 
        printf(" You got B grade,Well done,");
    }
    else if (num >= 55){  
        printf(" You got C grade,Good job");
    }
    else if (num >= 40){  
        printf(" You got D grade,You passed but you could do better");
    }
    else if (num >= 30){  
        printf(" You got E grad,Please try again next time");
    }
    else { 
        printf(" You got F grade, You Failed in this exam,");
    }
	

	return 0;
}
