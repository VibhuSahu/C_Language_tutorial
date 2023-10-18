// 8.Summing up 1 – 2 + 3 – 4 + 5…. N
#include <stdio.h>

int main() {
    int user, resultValue=0;
    printf("Enter a number : ");
    scanf("%d", &user);

    for (int i = 1; i <= user; i++) {
        if (i%2==0) {
            resultValue -= i;
        } else {
            resultValue += i;
        }
    }
    printf("%d", resultValue);

    return 0;
}