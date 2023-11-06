// # b. Write a program to check if a number is prime or not. 
#include <stdio.h>

int main() {
    int user, userR=0;
    printf("Enter the number you want to check: ");
    scanf("%d", &user);

    for (int i = 2; i < user; i++) {
        if(user % i == 0) {
            userR=1;
            break;
        } 
    } 
    if (userR!=0) {
        printf("This number is NOT Prime Number.\n");
    } else {
        printf("This number is Prime Number.\n");
    }

    return 0;
}
/*
Output :
Enter the number you want to check: 5
This number is Prime Number.
*/