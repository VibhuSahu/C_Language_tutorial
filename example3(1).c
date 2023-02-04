/*
Question 3. Partice Qs3 (Area of Circle).
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int radius;                                 // Declaration of values.

    printf("Enter the radius of given circle : ");                  // Taking radius as input from user.
    scanf("%d",&radius);

    printf("Area of Circle is %f", (3.14 * radius * radius));       // Performing the Arithmetic Opration on it.
    return 0;
}
