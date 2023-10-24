// # Function Declaration and Definition 
// -> Declaration: the functions name, return type, and parameters (if any)
// -> Definition: the body of the function (code to be executed)
#include <stdio.h>

void myFunction(char parameter[]) {     // declaration
    // the body of the function (definition)
    printf("Print inside a Function.");
}


// The main method
int main() {
    myFunction("Argument");     // Call the function

    return 0;
}