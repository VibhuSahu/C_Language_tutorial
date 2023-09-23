// # a.  5 * 2 - 2 * 3 
// # b.  5 * 2 / 2 * 3 
// # c.  5 * (2 / 2) * 3 
// # d.  5 + 2 / 2 * 3 
#include<stdio.h>


int main() {
    int a = 5 * 2 - 2 * 3;
        // a = 10 - 6
        // a = 4

    int b = 5 * 2 / 2 * 3;
        // b = 10 / 2 * 3
        // b = 5 * 3
        // b = 15

    int c = 5 * (2 / 2) * 3;
        // c = 5 * (1) * 3
        // c = 5 * 3
        // c = 15

    int d = 5 + 2 / 2 * 3;
        // d = 5 + 1 * 3
        // d = 5 + 3
        // d = 8

        
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}
/*
Output :
4
15
15
8
*/