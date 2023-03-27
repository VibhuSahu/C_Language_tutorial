#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char const *argv[])
{   
    // floating point
    printf("Example of floating point number - %f\n",8.9);
    printf("Example of floating point number - %f\n",5.0 + 4.5);
    printf("Example of floating point number - %f\n",5.0 - 4.5);
    printf("Example of floating point number - %f\n",5.0 * 4.5);
    printf("Example of floating point number - %f\n",5.0 / 4.0);


    // intger
    printf("Example of Integer number - %d\n", 5 / 4);
    printf("Example of Integer number - %d\n", 5.89);
    int num = 6;
    printf("Example of Integer number - %d\n", num);


    // Some important stuff
    printf("Example of extraction of Power - %f\n", pow(2,3));
    printf("Example of extraction of Square - %f\n", sqrt(36));

    // Roundof functions
    printf("Example of incrementing values of - %f\n",ceil(36.365));
    printf("Example of decrementing values of - %f\n",floor(36.665));


    return 0;
} 

/*  Output :
    Example of floating point number - 8.900000
    Example of floating point number - 9.500000
    Example of floating point number - 0.500000
    Example of floating point number - 22.500000
    Example of floating point number - 1.250000
    Example of Integer number - 1
    Example of Integer number - 687194767
    Example of Integer number - 6
    Example of extraction of Power - 8.000000
    Example of extraction of Square - 6.000000
    Example of incrementing values of - 37.000000
    Example of decrementing values of - 36.000000

*/