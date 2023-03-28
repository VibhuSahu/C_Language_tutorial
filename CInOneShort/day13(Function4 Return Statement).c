#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double cube(double number);


int main(int argc, char const *argv[])
{
    /* code */
    printf("Answers : %f\n", cube(3.0));
    return 0;
}


double cube(double number) {
    return number * number * number;
}