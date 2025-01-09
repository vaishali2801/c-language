#include<stdio.h>


void length(){
	char string[100] = "development";
	
	int i = 0;
	int count = 0;
	
	while(string[i] != '\0'){
		
		count++;
		
		
		i++;
	};
	printf("length of string is : %d",count);
	
}



int main(){
	
	length();
	
	
	return 0;
}
