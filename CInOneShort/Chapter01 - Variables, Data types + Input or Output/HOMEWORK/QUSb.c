// # b. Take a number(n) from user & output its cube(n*n*).
// # c. Write comments for programs a & b.  
#include<stdio.h>


int main() {
    int n;
    printf(" Enter the value of n :  "); // Inputting Value for 'N'
    scanf("%d", &n);

    printf(" The value of N cube is %d\n", n * n * n);
    return 0;
}

/*
Output :
 Enter the value of n :  5
 The value of N cube is 125
*/