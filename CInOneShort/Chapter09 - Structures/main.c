// #  Structure 
// -> Structure is a way to group variables.
// -> It can be used for organizing and managing data in your program.
// -> Structure can be a collection of dissimilar elements.
// -> They are useful when you need to store related information together.
// -> Definining structure is creating a custem data type.



// Create a Structure
#include <stdio.h>
struct Student {        // Structure declaration
    int myNum;          // Member (int variable)
    char myLetter;        // Member (char variable)
};      // End the structure with a semicolon


int main() {
  // Create a structure variable of myStructure called s1
  struct Student s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);          // Output : My number: 13
  printf("My letter: %c\n", s1.myLetter);       // Output : My letter: B

  return 0;
}