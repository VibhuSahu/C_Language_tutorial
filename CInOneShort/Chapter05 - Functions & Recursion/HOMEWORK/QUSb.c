// # b. Write a function to find square root of a number. 
#include <stdio.h>
#include <math.h>

void squareRoot(int);

int main() {
    int num;
    printf("Enter any positive integer: ");
    scanf("%d", &num);
    squareRoot(num);

    return 0;
}

void squareRoot(int num) {
    printf("Square root of %.2d = %.2f\n", num, sqrt(num));
}