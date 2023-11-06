// # Question 7. Write a program by c to replace each constant in a string with the text one except letter  ‘z’, ‘Z’ and ‘a’ , ‘A’ . Thus the string “Programming in C is fun” should be modified as “Qsphsannjoh jo D jt gvo”
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Modified string: ");
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'b' && str[i] <= 'y') || (str[i] >= 'B' && str[i] <= 'Y')) {
        str[i]++;
        }
        printf("%c", str[i]);
    }

    return 0;
}