// # Question 14. Define string List out all string manipulation function. Explain any four  string manipulation functions with example 
/*
Commonly Used String Manipulation Functions in C:

strlen(): Returns the length (number of characters) in a string.
strcpy(): Copies one string to another.
strcat(): Concatenates (appends) one string to the end of another.
strcmp(): Compares two strings and returns an integer indicating their relationship.
strchr(): Searches for the first occurrence of a character in a string.
strstr(): Searches for the first occurrence of a substring in a string.
strtok(): Tokenizes a string into substrings based on a delimiter.
strlwr(): Converts a string to lowercase.
strupr(): Converts a string to uppercase.
*/

// Examples of Two String Manipulation Functions in C:

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    char source[100];

    // strlen()
    int length = strlen(str);
    printf("Length of  the  string: %d\n", length);

    // strcpy()
    strcpy(source, str);
    printf("source variable string: %d\n", source);


    // strcat()
    char str0[] = "Hello, ";
    char str00[] = "World!";
    strcat(str0, str00);
    printf("Concatenated string: %s\n", str0);


    // strcmp()
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    if (result < 0) {
        printf("str1 comes before str2\n");
    } else if (result > 0) {
        printf("str1 comes after str2\n");
    } else {
        printf("str1 and str2 are equal\n");
    }

    return 0;
}
