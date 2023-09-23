#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert an integer to its binary representation
char* intToBinary(int num) {
    // Determine the number of bits needed to represent the integer
    int numBits = sizeof(num) * 8;

    // Allocate memory for the binary representation (including the null terminator)
    char* binaryStr = (char*)malloc(numBits + 1);

    if (binaryStr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // Initialize the binary string
    binaryStr[numBits] = '\0';

    // Populate the binary string by shifting bits
    for (int i = numBits - 1; i >= 0; i--) {
        binaryStr[i] = (num & 1) ? '1' : '0';
        num >>= 1;
    }

    return binaryStr;
}

int main() {
    int num = 42;
    int* binary = (int) intToBinary(num);





    // Free the dynamically allocated memory
    free(binary);

    return 0;
}
