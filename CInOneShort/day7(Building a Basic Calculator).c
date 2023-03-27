#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer - %f\n", num1 + num2);
    return 0;
}
/*  Output :
    Enter first number: 23
    Enter second number: 26
    Answer - 49

*/