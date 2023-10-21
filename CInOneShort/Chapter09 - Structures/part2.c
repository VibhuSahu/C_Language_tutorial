#include <stdio.h>
#include <string.h>

struct temp1 {      // Global structure
    char Name[50];
    int Age;
};


int main() {
    struct temp2 {      // Local Structure
        char firstName[50];
        char lastName[50];
    };


    struct temp1 user1;

    strcpy(user1.Name, "Vibhu Sahu");
    user1.Age = 20;
    printf("My name is %s and my Age is %d.\n", user1.Name, user1.Age);     // Output : My name is Vibhu Sahu and my Age is 20.
    

    struct temp2 user2;
    strcpy(user2.firstName, "John");
    strcpy(user2.lastName, "Doe");
    printf("Hi %s %s \nwho's you day.\n", user2.firstName, user2.lastName);
    /*
    Output : 
    Hi John Doe 
    who's you day.
    */

}