// # a. Write a program to print the average of 3 numbers. 
#include<stdio.h>


int main() {
    int a, b, c;
    printf("Enter three integers: "); // Ask for input from user
    scanf("%d %d %d", &a,&b ,&c);

    float d = (a + b + c) / 3;

    printf(" The average of 3 number is : %f", d);
    return 0;
}