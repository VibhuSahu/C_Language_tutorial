// # Question 16. Write a C program to illustrate call by value parameter passing technique and write a C program to explain call by reference parameter passing technique.
/*

    *Call by Reference*
In call by reference method of parameter passing, the address of the actual parameters is passed to the function as the formal parameters.

Both the actual and formal parameters refer to the same locations.
Any changes made inside the function are actually reflected in the actual parameters of the caller.



    *Call By Value*
In call by value method of parameter passing, the values of actual parameters are copied to the function’s formal parameters.

There are two copies of parameters stored in different memory locations.
One is the original copy and the other is the function copy.
Any changes made inside functions are not reflected in the actual parameters of the caller.
*/


#include <stdio.h>

void swap(int* a, int* b) {
    int c = *a;
    *a = *b;
    *b = c;
}


int main() {
    int a = 5, b = 6;
    printf("%d %d\n", a, b);

    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}


#include <stdio.h>

void swap(int a, int b) {
    int c = a;
    a = b;
    b = c;
    printf("%d %d\n", a, b);
}


int main() {
    int a = 5, b = 6;
    printf("%d %d\n", a, b);

    swap(a, b);
    printf("%d %d\n", a, b);
    return 0;
}