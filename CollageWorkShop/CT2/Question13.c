// # Question 13. write a C program to implement string copy operation STRCOPY(str1, str2) that copies string str1 to another string str2 without using library function
#include <stdio.h>

void STRCOPY(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[20];  // Make sure the destination has enough space
    STRCOPY(source, destination);
    printf("Copied string: %s\n", destination);
    return 0;
}
