#include <stdio.h>

int main() {
  char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
  char greetings2[] = "Hello World!";
  
  printf("%lu\n", sizeof(greetings));       // Outputs 13
  printf("%lu\n", sizeof(greetings2));      // Outputs 13
  // %lu is used for specifing the unsiged long int data type.   
  
  return 0;
}