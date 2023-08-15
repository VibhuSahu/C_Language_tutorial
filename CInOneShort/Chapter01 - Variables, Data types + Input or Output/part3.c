// #  Variables Data Types 
// -> Char or signed char  - 1 bytes 
// -> Unsigned char  - 1 bytes 
// -> Int or signed int  - 2 bytes 
// -> Unsigned int  - 2 bytes 
// -> Short int or Unsigned short int  - 2 bytes 
// -> Signed short int  - 2 bytes 
// -> Long int or Signed long int  - 4 bytes 
// -> Unsigned long int  - 4 bytes 
// -> float  - 4 bytes 
// -> Long double  - 10 bytes 
// -> C language is old language we don't have boolean and string data types
#include<stdio.h>

int main() {
    char FirstName = 65; // Represents the character 'A' in ASCII
    signed char myChar = -65;
    unsigned char myUnsignedChar = 200;
    signed int Number = 88;
    unsigned int positiveInteger = 12345;
    short int smallNumber = -32768; // Minimum value for a 16-bit signed short int
    signed short int negativeShort = -12345;
    signed long int largeNumber = -1234567890;
    unsigned long int bigNumber  = 4294967295; // Max value for a 32-bit unsigned long int
    float floatValue = 3.14159;
    double doubleValue = 3.141592653589793;
    long double longDoubleValue = 3.141592653589793238462643383279502884L;


    // Printing all Data types
    printf("Value of FirstName: %c\n", FirstName);
    printf("Value of myChar: %d\n", myChar);
    printf("Value of myUnsignedChar: %u\n", myUnsignedChar);
    printf("Value of Number: %d\n", Number);
    printf("Value of positiveInteger: %u\n", positiveInteger);
    printf("Value of smallNumber: %d\n", smallNumber);
    printf("Value of negativeShort: %d\n", negativeShort);
    printf("Value of largeNumber: %ld\n", largeNumber);
    printf("Value of Y: %lu\n", bigNumber);
    printf("Value of floatValue: %f\n", floatValue);
    printf("Value of doubleValue: %lf\n", doubleValue);
    printf("Value of longDoubleValue: %.18Lf\n", longDoubleValue);

    return 0;
} 


/*
Output :
Value of FirstName: A
Value of myChar: -65
Value of myUnsignedChar: 200
Value of Number: 88
Value of positiveInteger: 12345
Value of smallNumber: -32768
Value of negativeShort: -12345
Value of largeNumber: -1234567890
Value of Y: 4294967295
Value of floatValue: 3.141590
Value of doubleValue: 3.141593
Value of longDoubleValue: 3.141592653589793116
*/