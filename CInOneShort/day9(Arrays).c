#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int luckyNumber[]= {4 , 8, 15, 16, 23, 42};
    //                  0   1  2    3   4   5

    printf("%d\n", luckyNumber[0]);
    luckyNumber[1] = 200;       // how to change any value in array
    printf("%d\n", luckyNumber[1]);

    char phase[20] = "Array";   // the is also an array
    printf("%s\n", phase);

    return 0;
}
/*  Output :
    4
    200
    Array
*/