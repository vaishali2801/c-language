#include<stdio.h>

int findLength(char str[]) {
    int length = 0;
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    return length;
}

int main() {
    char inputString[100]; 

    
    printf("Enter any string: ");
    scanf("%s", inputString); 

   
    int length = findLength(inputString);

    
    printf("Length is: %d\n", length);

    return 0;
}
