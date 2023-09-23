// # Operator Precedence 
//      /, *, %
//         |
//         |
//         V
//        -, +
//         |
//         |
//         V
//         =   ---> Assignment


// # Associativity (for same precedence)
//      left --> right


// $ 
#include<stdio.h>


int main() {
    int x = 4 * 3 / 6 * 2;
        // x = 12 / 6 * 2
        // x = 2 * 2
        // x = 4
    printf("%d\n", x);

    int X = 4 + 9 * 10;
        // X = 4 + 90
        // X = 94
    printf("%d\n", X);


    return 0;
}
/*
Output :
4
94
*/