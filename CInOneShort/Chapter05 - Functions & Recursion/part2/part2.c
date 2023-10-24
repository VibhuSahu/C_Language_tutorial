// # Trying both mathod's side by side 
#include <stdio.h>

int Function1(int, int);

int Function2(int x, int y) {
    return x + y;
}


int main() {
    int x = 5, y = 10;
    printf("The Addition of two numbers %d + %d = %d\n", x, y, Function1(x, y));        // Output : The Addition of two numbers 5 + 10 = 15
    printf("The Addition of two numbers %d + %d = %d\n", x, y, Function2(x, y));        // Output : The Addition of two numbers 5 + 10 = 15

    return 0;
}

int Function1(int x, int y) {
    return x + y;
}