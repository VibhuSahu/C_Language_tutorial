// # c. Write a program to print prime numbers in a range. 
#include <stdio.h>

int main() {
    int user, n, i, flag=0;
    printf("Enter the number you want to check: ");
    scanf("%d", &user);

    for (n=0; n<=user; n++) {
        flag = 0;
        if (n == 0 || n == 1) {flag = 1;}

        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag==0) {printf(" %d \n", n);}

    }

    return 0;
}
/*
Output :
Enter the number you want to check: 55
 2 
 3 
 5 
 7 
 11 
 13 
 17 
 19 
 23 
 29 
 31 
 37 
 41 
 43 
 47 
 53 
*/