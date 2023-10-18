// 1. Generation of number series 1,2,3,4,...n
#include <stdio.h>

int main() {
    int user;
    printf("Enter a Number : ");
    scanf("%d", &user);
    for (int i = 1; i <= user; i++)
    {
        printf("%d \n", i);
        
    }

    return 0;
}