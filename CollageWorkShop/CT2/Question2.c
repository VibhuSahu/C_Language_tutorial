// # Question 2. Write a C program to count the number of vowels , consonants digits, spaces and characters in a given string
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, characters = 0;

    printf("Enter a string: ");
    gets(str);  // You can use gets() for simplicity, but it's not recommended for safe input.

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert character to lowercase for vowel checking

        if (isalpha(ch)) {
            characters++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Characters: %d\n", characters);

    return 0;
}
