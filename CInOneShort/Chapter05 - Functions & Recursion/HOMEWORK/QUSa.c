// # a. Write a function to find sum of digits of a number. 
// # b. Write a function to find square root of a number. 
// # c. Write a function to print "Hot" or "Cold" depending on the temperature user enters. 
// # d. Make you own pow function. 
#include <stdio.h>

int sum(int, int);

int main() {
    int a, b;
    printf("    Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\n    Sum = %d\n", sum(a, b));
    
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
/*
Output : 
    Enter two numbers: 5 5

    Sum = 10
*/