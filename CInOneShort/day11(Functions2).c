#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void sayHi(char name[], int age);

int main() {
    sayHi("Vibhu Sahu",19);
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are now %d\n", age);
}