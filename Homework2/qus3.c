/*
Question 3. Write a program to print the smallest number of two.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b;                          // Declaration of value of a, b.

    printf("Enter the value a : ");     // Taking input a from user.
    scanf("%f",&a);

    printf("Enter the value b : ");     // Taking input b from user.
    scanf("%f",&b);

    if (a == b) {       // Condition Get apply when both values are equal.
        printf("Both the number Equal.");           
    } else if (a > b){  // Condition Get apply when a is greater than b.
        printf("a = %f is Greater than b = %f", a, b);
    } else {            // Condition Get apply when b is greater than b.
        printf("b = %f is Greater than a = %f", b, a);
    }

    return 0;
}
