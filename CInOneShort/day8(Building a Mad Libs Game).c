#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char color[25];
    char pluralNoun[25];
    char celebrityF[25];
    char celebrityL[25];

    printf("Enter color : ");
    scanf("%s", color);
    printf("Enter plural noun : ");
    scanf("%s", pluralNoun);
    printf("Enter a Celebrity : ");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s\n",color);
    printf("%s are blue\n",pluralNoun);
    printf("I love %s %s\n",celebrityF,celebrityL);
    return 0;
}
/*  Output:
    Enter color : red 
    Enter plural noun : fuckyou
    Enter a Celebrity : mia khalifa
    Roses are red
    fuckyou are blue
    I love mia khalifa
*/
