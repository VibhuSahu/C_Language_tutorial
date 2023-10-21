#include <stdio.h>

struct aboutMe {
    int Age;
    char FirstLetter;
    char Name[50];
};


int main() {
    struct aboutMe person1 = {20, 'V', "Vibhu Sahu"};
    struct aboutMe person2 = {18, 'K', "Kunal MeshRam"};



    printf("Hello!\n");
    printf("My Name is %s my name start's with %c and my Age is %d\n", person1.Name, person1.FirstLetter, person1.Age);
    printf("My Name is %s my name start's with %c and my Age is %d\n", person2.Name, person2.FirstLetter, person2.Age);

    return 0;
}

/*
Output : 
Hello!
My Name is Vibhu Sahu my name start's with V and my Age is 20
My Name is Kunal MeshRam my name start's with K and my Age is 18
*/