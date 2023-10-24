// #    READING A FILE 
// -> In order to read a file, we can use fscanf function.
// -> This function is file version of scanf function.
// -> fscanf expects a file pointer in additoin to the other arguments which scanf expects 
// -> We will have to open the file in read mode in order to use this function
#include <stdio.h>

int main() {
    FILE *file = NULL;
    char stringValue[30];       // Creating a empt string variable with name stringValue
   
    file = fopen("textFile.txt", "r");      // opening the ' textFile.txt ' in reading mode.
   
    fscanf(file, "%s", stringValue);        // fetching the first word from the text file and stroing it into stringValue
   
    printf("%s\n", stringValue);        // printing out the value which is in the stringValue variable

    fclose(file);       // Closing the file
    return 0;   
}