#include <stdio.h>
#include <string.h>     // you must include string header file use perform certain operations on strings.

int main() { 

    // String Length
    char str1[50] = "Hello World!";
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%lu\n", strlen(str1));          // Output : 12
    printf("%lu\n", strlen(alphabet));      // Output : 26
    printf("%lu\n", sizeof(alphabet));        // Output : 27    // As sizeof also includes the \0 character when counting.
    printf("%lu\n", sizeof(str1));            // Output : 50    // sizeof will always return the memory size (in bytes), and not the actual string length.
    


    // Concatenate Strings
    char str2[50] = "Hello ";
    char str3[] = "World!";
    strcat(str2, str3);      // Concatenate str2 to str1 (result is stored in str1)
    printf("%s\n", str2);   // Output : Hello World!        // Print str1
    // Note that the size of str1 should be large enough to store the result of the two strings combined (20 in our example).



    // Copy Strings
    char str4[] = "Hello World!";
    // size of variabl should be large enough to store the copied string and must specify the size of Array
    char str5[20];
    strcpy(str5, str4);         // Copy str4 into str5
    printf("%s\n", str5);       // Output : Hello World!    // Print str5



    // Compare string
    // It returns 0 if the two strings are equal, otherwise a value that is not 0.
    char text1[] = "Hello";
    char text2[] = "Hello";
    char text3[] = "Hi";
    // Compare text1 and text2 and print the result
    printf("%d\n", strcmp(text1, text2));       // Output : 0
    // Compare text1 and text3 and print the result (Not 0)
    printf("%d\n", strcmp(text1, text3));       // Output : -4   // the string are not equal.

    return 0;
}