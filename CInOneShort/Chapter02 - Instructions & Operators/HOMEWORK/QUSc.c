// # Write a program to print the smallest number of two. 
#include<stdio.h>


int main() {
    
    int num1,num2;
    printf("Enter first number  :  ");
    scanf("%d",&num1);
    printf("Enter second number :  ");
    scanf("%d",&num2);


    if (num1 > num2) {
        printf("\n %d is greater than  %d\n", num1, num2);
    } else if (num2 > num1) {
        printf("\n %d is greater than  %d\n", num2, num1);
    } else {
        printf("\n Both are Equal! \n");
    }
    return 0;
}

/*
Output :
Enter first number  :  3
Enter second number :  2

 2 is greater than  3
*/