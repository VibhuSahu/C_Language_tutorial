#include <stdio.h>

int main() {
    FILE *file;
    char paragraph[] = "If you want to add content to a file without deleting the old content, you can use the a mode.";


    // Open a file in append mode
    file = fopen("textFile.txt", "a");


    // Append some text to the file
    fprintf(file, "\n%s", paragraph);


    // Close the file
    fclose(file);

    return 0;
}