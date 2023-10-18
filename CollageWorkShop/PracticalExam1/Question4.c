// 4.Generation of Fibonacci series 0, 1, 1, 2, 3, 5, 8, …..n
#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int user, count=-1;
    printf("Enter any number : ");
    scanf("%d", &user);
    while (count++<=user) {
        printf("%d ", fibonacci(count));

    }
    
    return 0;
}