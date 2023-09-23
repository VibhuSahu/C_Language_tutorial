// $ Arithmetic Instructions 
#include<stdio.h>


int main() {
    int a = 2;
    int b = 3;
    int c = a + b;
    // $ a b and c are operand's
    // $ [ + ] is Operator 
    // ! NOTE - Single variable on the LHS


    // VALID
    int A = b + c;
    int B = b * c;
    int C = b / c;
    
    // INVALID
    // b + c = a
    // a = bc
    // a = b^c  --> it will not give you any error it will parfore zore opration.


    // # Modular Operator % 
    // Returns remainder for int
    printf("%d\n", 3%2);     // Output : 1
    printf("%d\n", (-3)%2);  // Output : -1

    // !NOTE - POW(x,y) for x to the power y

    return 0;
}