// # Process types for TypeConversion 
// -> Implicit 
// -> Explicit (Force Conversion) 

// # Solve:  int a = 1.999999 
#include<stdio.h>


int main() {
    int a = (int) 1.999999;
    printf("The Value in side a Variable is %d\n", a);

    return 0;
}
/*
Output :
The Value in side a Variable is 1
*/