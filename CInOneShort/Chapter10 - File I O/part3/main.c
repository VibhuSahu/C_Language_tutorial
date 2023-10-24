#include <stdio.h>

int main() {
    FILE *file;
    char paragraph[1000];
    scanf("%s", paragraph);

    printf("%s\n", paragraph);
    file = fopen("textFile.txt", "a");
    fprintf(file, "%s\n", paragraph);
    printf("Done");


    fclose(file);

    return 0;
}