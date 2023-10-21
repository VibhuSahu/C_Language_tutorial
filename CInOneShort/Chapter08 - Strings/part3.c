// Loop Through a String
#include <stdio.h>
#include <string.h>

int main() {
    char Name[] = "Vibhu Sahu";
    for (int i = 0; i < strlen(Name); i++) {
        printf("%c\n", Name[i]);
    }

    return 0;
}
/*
Output : 
V
i
b
h
u
 
S
a
h
u

*/