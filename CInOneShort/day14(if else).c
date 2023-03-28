#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double max(double x,double y);

int main(int argc, char const *argv[])
{
    /* code */
    printf("%lf is Bigger number.",max(4,8));
    return 0;
}

double max(double x,double y) {
    double Answer;

    if (x > y) {
        Answer = x;
    } else {
        Answer = y;
    }
    return Answer;
}