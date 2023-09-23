// # a. Write a Program to calculate perimeter of rectangle. Take side, a & b, from the user.
// # c. Write comments for programs a & b.  
#include<stdio.h>


int main() {
    float length, breath;

    printf(" Enter the Length of Rectangle :  ");
    scanf("%f", &length);

    printf(" Enter the Breath of Rectangle :  ");
    scanf("%f", &breath);

    printf(" The perimeter of Rectangle - %f\n", 2 * (length + breath));

    return 0;   
}

/*
Output :
 Enter the Length of Rectangle :  12
 Enter the Breath of Rectangle :  12
 The perimeter of Rectangle - 48.000000
*/
