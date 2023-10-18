// 1.Generation of number series 1, 2, 3, 4,…..n
// 2.Generation of even number series 2, 4, 6, …..n
// 3.Generation of ODD number series 1, 3, 5, …..n
// 4.Generation of Fibonacci series 0, 1, 1, 2, 3, 5, 8, …..n
// 5.Summing up series 1 + 2 + 3 + 4….. +n
// 6.Summing up Even Number series
// 7.Summing up Odd Number series
// 8.Summing up 1 – 2 + 3 – 4 + 5…. N
// 9.Summing up 12 + 22 + 32 + 42….. +n
// 10.Summing up 22 + 42 + 62 + 82 + ….. n2
// 11.Summing up 11+22+33+44+ …. nn
// 12.Summing up squares of Odd numbers
// 13.Summing up cubes of n numbers
// 14.Product series (Factorial of a given number)
// 15.Finding given number is Armstrong or not
// 16.Summing up any n numbers and finding average
// 17.Summing up the digits of an integer number
// 18.Revering the digits of an integer number
// 19.Finding the biggest out of n integers


// 15.Finding given number is Armstrong or not
#include <stdio.h>

int reverseValue(int value) {
    int remainder, reverse=0;
    while(value != 0){
        remainder = value % 10;
        reverse = reverse * 10 + remainder;
        value /= 10;
        }
    return reverse;
}

void ArmstrongNumOrNot(int element) {

    if (reverseValue(element) == element) {
        printf(" It is a Armstrong Number");
    } else {
        printf(" It is not a Armstrong Number");
    }
}


int main() {
    int user;
    printf("Enter a number: ");
    scanf("%d", &user);
    ArmstrongNumOrNot(user);
    return 0;
}