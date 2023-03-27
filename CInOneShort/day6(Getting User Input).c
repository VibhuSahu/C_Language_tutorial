#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter age : %d ", age);
    scanf("%d", &age);

    printf("You are now - %d\n", age);

    char name[100];
    printf("Enter your Name : ");
    scanf("%s", &name);
    printf("Hello sir %s \n",name);


    char Name[256];
    printf("Enter your name: ");
    fgets(Name, sizeof(Name), stdin);
    printf("HEllo sir %s GoodMorning! \n",Name);

    return 0;
}

/*  Output :
    Enter age : 0 55
    You are now - 55
    Enter your Name : vihbu sahu
    Hello sir vihbu 

    Enter your name: vibhu kumar sahu fathers name herprasad sahu
    HEllo sir vibhu kumar sahu fathers name herprasad sahu
     GoodMorning!
*/