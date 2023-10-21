// Escape character
#include <stdio.h>

int main() {
    //  \' is Result String (') Single quote
    char txt1[] = "My name is \'Vibhu Sahu\'.";
    printf("%s\n", txt1);       // Output : My name is 'Vibhu Sahu'.


    //  \" is Result String (") Double quote
    char txt2[] = "My name is \"Vibhu Sahu\".";
    printf("%s\n", txt2);       // Output : My name is "Vibhu Sahu".

    
    //  \\ is Result String (\) Backslash
    char txt3[] = "My name is \\ Vibhu Sahu.";
    printf("%s\n", txt3);       // Output : My name is \ Vibhu Sahu.


    // \n is Resulting New line 
    char txt4[] = "This is first line.\nAnd this is second line.";
    printf("%s\n", txt4);        
    /*
    Output : 
    This is first line.
    And this is second line. 
    */


    // \t is Resulting Tab
    char txt5[] = "\tThis is first line.";
    printf("%s\n", txt5);       // Output :         This is first line.

    
    // \0 is Resulting Null 
    char txt6[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", txt6);        // Output : Hello


    return 0;
}