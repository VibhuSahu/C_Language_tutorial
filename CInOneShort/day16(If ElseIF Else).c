#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int a, int b, int c);


int main(int argc, char const *argv[])
{
    /* Code */
    printf("%d Is the Biggest. \n", max(50,50,50));    
    return 0;
}


int max(int a, int b, int c) {
    int result;

    if (a >= b && a >= c) {
        result = a;
    } else if (b >= a && b >= c) {
        result = b;
    } else {
        result = c;
    }

    return result;
}