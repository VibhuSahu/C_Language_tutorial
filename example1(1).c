#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;

    // take value for a
    printf("Enter a");
    scanf("%d",&a);             // scanf is use to take input from user

    // take value for b
    printf("Enter b");
    scanf("%d",&b);

    // addition of both the values
    int sum = a+b;
    printf("Sum is : %d",sum);

    return 0;
}
