// # Types Operators 
// -> a. Arithmetic Operators  -> +,-,/,*,%
// -> b. Relation Operators    -> ==,>,>=,<,<=,!=
// -> c. Logical Operators     -> [ &  AND ], [ ||  OR ],[ !  NOT ] 
// -> d. Bitwise Operators 
// -> e. Assignment Operators 
// -> f. Ternary Operators     -> Condinal Operator 

// $ Arithmetic OPerators 
#include<stdio.h>


int main() {
    int a = 5;

    printf("%d\n", 5 + 6);   // Output : 11
    printf("%d\n", 5 - 6);   // Output : -1
    printf("%d\n", 5 * 6);   // Output : 30
    printf("%d\n", 10 / 2);  // Output : 5
    printf("%d\n", 10 % 2);  // Output : 0
    printf("%d\n", ++a);     // Output : 6
    printf("%d\n", a++);     // Output : 6
    printf("%d\n", --a);     // Output : 6
    printf("%d\n", a--);     // Output : 6

    return 0;
}