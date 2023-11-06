// # Question 1. Write a C program to implement strcmp(), strcat(), strcpy() and strlen() .
#include <stdio.h>
#include <string.h>

int main() {
    char firstVariable[] = "Helen";
    char secondVariable[] = "Amanda";
    char thirdVariable[] = "Amanda";
    char fourthVariable[100];

    printf("Is this both variable equal : %d\n",strcmp(firstVariable, secondVariable));
    strcpy(fourthVariable, firstVariable);
    printf("%s %s\n", firstVariable, secondVariable);
    
    strcat(fourthVariable,thirdVariable);
    printf("the value in side the :  %s\n", fourthVariable);

    printf("Length of the firstVariable :  %lu\n", strlen(firstVariable));

    return 0;
}