#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{   
    char characterName[] = "John";
    int characterAge = 35;

    printf("There once was a man named %s \n",characterName);
    printf("he was %d years old.\n",characterAge);

    characterAge = 45;
    printf("He really liked the name of John\n");
    printf("But did not like being %d.\n",characterAge);

    return 0;
}