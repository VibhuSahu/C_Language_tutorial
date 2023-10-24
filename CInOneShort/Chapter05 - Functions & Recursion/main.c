// #    C Functions
// -> A function is a block of code which only runs when it is called. 
// -> Define the code once, and use it many times.
// -> main() is a function which is used to execute code, and printf() is a function; used to output/ print text to the screen.
/*
Syntax :
void myFunction() {
  // code to be executed
}
*/
#include <stdio.h>

// Create a function
void myFunction() {
    // code to be executed
    printf("Hello World!\n");
}
// $ Example Explained 
// + myFunction() is the name of the function
// + void means that this function does not return any value (it's type)
// + The body of the function contains the code you want to execute
// + Inside the function (the body), add code that defines what the function shold do 


int main() {
    myFunction();       // call the function
    myFunction();
    myFunction();
    myFunction();


    return 0;
}
/*
Output :
Hello World!
Hello World!
Hello World!
Hello World!
*/