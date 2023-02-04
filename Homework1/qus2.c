/*
Question 2. Take a number(n) from user & output its cube(n*n*n).
*/

#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a;                                              // diclaration of value a.

    printf("Enter the value to find out it's qube : ");
    scanf("%d", &a);                                    // Taking input from user.

    printf("the cube of %d is = %d",a,(a*a*a));         // performing arithmetic opration.
    return 0;
}
