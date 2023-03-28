#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double max(double x, double y);

int main(int argc, char const *argv[])
{
    /* code */
    printf("%lf Is bigger number.\n",max(7,4));
    return 0;
}


double max(double x, double y) {

    if (x > y) {
        return x;
    } else if (x == y) {
        return x;
    } else {
        return y;
    }   
}