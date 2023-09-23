// $ Logical Operator 
#include<stdio.h>


int main() {
    printf("%d\n", 3<4 && 3<5);         // Output : 1
    printf("%d\n", 3<4 && 5<4);         // Output : 0

    printf("%d\n", 3<4 && 5<4);         // Output : 0
    printf("%d\n", 3>4 && 5>4);         // Output : 0
    printf("%d\n", 3<4 && 3<5);         // Output : 1
    
    printf("%d\n", !(3<4 && 3<5));      // Output : 0
    printf("%d\n", !(4<3 || 5<3));      // Output : 1
    return 0;
}