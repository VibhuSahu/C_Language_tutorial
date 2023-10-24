// #    WRITING TO A FILE
// -> In order to write to a file. we can use fprintf function. 
// -> This function is file version of printf function 
// -> fprintf expects a file pointer in addition to the other arguments which printf expects
// -> We will have to open the file in write mode in order to use this function 
#include <stdio.h>

int main() {
    FILE *file;
    char paragraph[] = "come division therefore every ran whatever satisfied brain such dear anybody threw sheet thousand swam mood check faster smell foreign fifteen black forty minerals";
    // Opening the file in write mode
    file = fopen("example.txt", "w");
    fprintf(file, "%s\n", paragraph);


    // Closing the file
    fclose(file);
    return 0;
}