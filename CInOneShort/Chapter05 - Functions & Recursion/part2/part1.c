// For code optimization, it is recommended to separate the declaration and the definition of the function.
// This way, you can use a forward declaration when declaring the function in another file (header),
#include <stdio.h>

// Function declaration
void myFunction();
int sum(int k);

// The main Function
int main() {
    myFunction();   // Call the function
    printf("%d\n", sum(5));

    return 0;
}


// Function definition
void myFunction() {
    printf("This is my first C program!\n");
}

int sum(int k) {
    return 5 + k;
}


/*
Output : 
This is my first C program!
10
*/