// #     C Function Parameters 
// $     Parameters and Arguments 
// + Information can be passed to functions as a parameter. Parameters act as variables inside the function. 
// + Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma. 
/*
Syntax : 
returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
*/

#include <stdio.h>

void functionName(int parameter1, int parameter2,int parameter3) {
    // code to be executed
    printf("Hello %d %d %d \n", parameter1, parameter2, parameter3);
}


void myFunction(char name[]) {      // parameter
    printf("Hello %s\n", name);
    
}


int main() {
    /* calling the function */
    functionName(1,2,3);        // Output : Hello 1 2 3         // Arguments
    functionName(4,5,6);        // Output : Hello 4 5 6 
    functionName(7,8,9);        // Output : Hello 7 8 9 


    /* calling the function */
    myFunction("Vibhu");        // Output : Hello Vibhu
    myFunction("Kunal");        // Output : Hello Kunal
    myFunction("Helen");        // Output : Helen
    return 0;
}