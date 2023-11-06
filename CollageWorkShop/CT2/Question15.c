// # Question 15. Define a recursion. Write a C recursive function for multiplying two intergers where a function call is passed with two integers m and n
/*
Recursion is a programming technique where a function calls itself in order 
to solve a problem. In a recursive function, the function breaks down a problem 
into smaller subproblems, and it continues to call itself with these subproblems 
until it reaches a base case, which is a condition that stops the recursion and 
returns a result.
*/
#include <stdio.h>

int multiply(int m, int n) {
    // Base case: If either m or n is 0, the result is 0.
    if (m == 0 || n == 0) {
        return 0;
    }

    // Recursive case: Multiply m by (n - 1) and add m to the result.
    return m + multiply(m, n - 1);
}

int main() {
    int m = 5; // First integer
    int n = 3; // Second integer

    int result = multiply(m, n);
    printf("%d x %d = %d\n", m, n, result);

    return 0;
}
