
// 15.Finding given number is Armstrong or not
#include <stdio.h>

int reverseValue(int value) {
    int remainder, reverse=0;
    while(value != 0){
        remainder = value % 10;
        reverse = reverse * 10 + remainder;
        value /= 10;
        }
    return reverse;
}

void ArmstrongNumOrNot(int element) {

    if (reverseValue(element) == element) {
        printf(" It is a Armstrong Number");
    } else {
        printf(" It is not a Armstrong Number");
    }
}


int main() {
    int user;
    printf("Enter a number: ");
    scanf("%d", &user);
    ArmstrongNumOrNot(user);
    return 0;
}