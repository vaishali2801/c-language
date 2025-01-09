#include<stdio.h>

void length(){
	
	char string[100] = "engineering"
	
	int i;
	int count = 0;
	
	while(string[i] != '\0'){
		
		count++;
		
		i++;	
	}
	printf("length is : %d",count);
		
}


int main(){
	
	length();
		
	return 0;
}
