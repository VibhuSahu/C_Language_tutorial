// Another Way of Creating Strings
#include <stdio.h>

int main() {
    char Name[] = {'V', 'i', 'b', 'h', 'u', ' ', 'S', 'a', 'h', 'u', '\0'};
    char Name1[] = {'V', 'i', 'b', 'h', 'u', ' ', 'S', 'a', 'h', 'u'};
    char Name2[] = "Vibhu Sahu";

    printf("%s\n", Name);
    printf("%s\n", Name1);
    printf("%s\n", Name2);


    return 0;
}
/*
Output :
Vibhu Sahu
Vibhu Sahudo
Vibhu Sahu
*/

/*
Why do we include the \0 character at the end? 
This is known as the "null terminating character", 
and must be included when creating strings using 
this method. It tells C that this is the end of the string.

*/