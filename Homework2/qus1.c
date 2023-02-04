/*
Question 1. Write a program to print the average of 3 numbers.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c;                            // Declaration of value of a,b,c.

    printf("Enter three number : \n");      // Taking three input from user.
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    printf("The average of three number = %f",(a + b + c)/3);   // Performing Arithmetic Operation to find average. 
    return 0;
}
