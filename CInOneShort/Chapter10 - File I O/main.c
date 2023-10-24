// #    File handling
// -> You can create, open, read and write to files by declaring a pointer to type FILE.
// -> The fopen() function is used to open the file with the specified mode (r for reading, w for writing, a for appending)
// -> The fopen() function opens the file with the specified name for reading or writing. If you want to append data at the end of the file
// -> The file is created in the same directory as your other c files, if nothing else is specified.
// -> If you want to create the file in a specific folder, just provide an absolute path.

// #    Closing the file 
// -> It is considered as good practice, because it makes sure that :
// ->       * Changes are saved properly
// ->       * Other programs can use the file (if you want)
// ->       * Clean up unnecessary memory space.

#include <stdio.h>

int main() {
    FILE *file;
    
    //  Create a file fopen(filename, mode);
    file = fopen("CInOneShort/Chapter10 - File I O/textFile.txt", "w");



    // Close the file
    fclose(file);
}