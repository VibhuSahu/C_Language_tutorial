// # Multiple Parameters
#include <stdio.h>

void myFunction(char name[], int age) {
    printf("Name: %s\n", name);
    printf("Age: %d\n\n", age);
}


int main() {
    myFunction("Violet", 46);
    
    return 0;
}

/*
Output :
Name: Violet
Age: 46
*/