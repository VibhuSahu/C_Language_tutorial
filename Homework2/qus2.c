/*
Question 2. Write a program to check if given character is digit
            or not.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a;                                         // Declaration of value 'a'.

    printf("Enter the character : ");
    scanf("%c",&a);                                 // Taking input from user 'a'.

    if (a >= '0' && a <= '9') {                     // Condition Get apply when input is digit.
        printf("The given input is digit.");
    } else {                                        // Condition Get apply when input is not a digit.
        printf("The given input is not a digit.");
    }
    
    return 0;
}
