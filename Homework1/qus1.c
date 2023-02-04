/*
Question 1. Write a program to calculate perimeter of rectage.
            take sides, a & b, from the user.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    

    // Taking a as a length input from user.
    printf("Enter the length of rectangle : ");
    scanf("%d",&a);

    // Taking b as breath input from user.
    printf("Enter the breath of rectangle : ");
    scanf("%d",&b);

    // Appling the arethmetic prosidure.
    printf("The perimeter of a rectage is %d",2*(a + b));
    return 0;
}
