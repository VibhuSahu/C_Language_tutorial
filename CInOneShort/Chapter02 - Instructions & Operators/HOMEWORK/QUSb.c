// # b. write a program to check if given character is digit or not. 
#include<stdio.h>


int main() {
    char ch;
    printf(" Enter a character :  ");
    scanf("%c", &ch);

    // ASCII value of '0' =48 and '9'=57
    if ('0' <= ch && ch <= '9') {
        printf("\n %c is Digit \n", ch);
    } else {
        printf("\n %c is Not a Digit \n", ch);
    }

    return 0;
}

/*
Output :
 Enter a character :  d

 d is Not a Digit 
*/