#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num; // The integer you want to convert
    scanf("%d", &num); // The integer Value taking from the user 
    int length = snprintf(NULL, 0, "%d", num); // Calculate the number of digits
    int digits[length]; // Create an array to store the individual digits

    // Extract digits and store them in the array
    for (int i = length - 1; i >= 0; i--) {
        digits[i] = num % 10; // Get the last digit
        num /= 10; // Remove the last digit
    }

    // Print the individual digits from the array
    printf("Sum of Digits of Five digits: ");
    int result = 0;
    for (int i = 0; i < length; i++) {
        result += digits[i];
    }
    printf("%d\n",result);

    return 0;
}
