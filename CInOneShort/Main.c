#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A = 0;
    int B = 0;
    int C = 0;

    printf(" Enter A : ");
    scanf("%d", &A);
    printf(" Enter B : ");
    scanf("%d", &B);

    C = A % B;

    printf(" Sum of Input - %d",C);
    return 0;
}
