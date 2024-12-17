#include<stdio.h>

int main(){
	
	int grade;
	
	printf("Enter your mark:");
	scanf("%d",&grade);
	

	if(grade >= 85){
        printf(" You got A grade \n");
		grade = 'A';
    }
    else if (grade >= 70){ 
        printf(" You got B grade \n");
        grade = 'B';
    }
    else if (grade >= 55){  
        printf(" You got C grade \n");
        grade ='C';
    }
    else if (grade >= 40){  
        printf(" You got D grade \n");
        grade = 'D';
    }
    else if (grade >= 30){   
	
	    printf(" You got E grad \n");
	    grade = 'E';
    }
    else { 
        printf(" You got F grade \n");
        grade = 'F';
    }
    
    switch(grade){
    	case 'A': printf("Excellent work! \n");
    	break;
    	case 'B': printf("Well done \n");
    	break;
    	case 'C': printf("Good job \n");
    	break;
    	case 'D': printf("You passed but you could do better \n");
    	break;
    	case 'E': printf("you are lucky \n");
    	break;
    	default: printf("you failed in exam \n");
    	break;
    	}
	if(grade == 'A'|| grade == 'B'|| grade == 'C'|| grade == 'D'){
		printf("Congratulations! You are eligible for the next level \n");
        	}
	else{
		printf("Please try again next time \n");
	}
	

	return 0;
}
