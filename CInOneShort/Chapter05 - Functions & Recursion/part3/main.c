// # Recursion 
/*
Recursion : Recursion is the technique of making of function call itself. This 
            technique provides a way to break complicated problems down into 
            simple problems which are easier to solve.
*/
#include <stdio.h>

int sum(int k);

int main() {
    int result = sum(10);
    printf("The sum of numbers from 1 to 10 is: %d\n", result);


    return 0;
}

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}