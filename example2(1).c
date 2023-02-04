/*
Question 2. Practice Qs1 (Area of square).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int side;                                           // declaration of value.

    printf("Enter the length of one side : ");
    scanf("%d",&side);                                  // Taking input from user 

    printf("The area of square is %d",side * side);     // Performing Arithmetic Oprations.
    return 0;
}
