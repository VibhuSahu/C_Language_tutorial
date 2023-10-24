// #    C enum 
// -> Enum keyword is used. 
// -> User defined datatype
// -> The values are defined as constants and can be assigned to variables or passed as arguments in function calls.
// -> Uses defined type to assign name to integral constants. 
// -> Use enum when you have values that you know aren't going to change, like month days, days, colors deck of cards, etc.
#include <stdio.h>


enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level variable = MEDIUM; 

    switch (variable) {
        case 25:
            printf("LOW\n");
            break;
        case 50:
            printf("MEDIUM\n");
            break;        
        case 75:
            printf("HIGH\n");
            break;
        default:
            printf("Default\n");
        
    
    }
    return 0;
}