// #    C enum 
// -> Enum keyword is used. 
// -> User defined datatype
// -> The values are defined as constants and can be assigned to variables or passed as arguments in function calls.
// -> Uses defined type to assign name to integral constants. 

#include <stdio.h>


enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

int main() {
    enum Level variable = LOW; 

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