#include <stdio.h>

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int matrixResult[3][3];

    printf("Enter the matrix1 : ");
    for (int a=0; a<3; a++) {
        for(int b = 0 ;b<3; b++){ 
            scanf("%d", &matrix1[a][b]);
        }
    }

    printf("Enter the matrix2 : ");
    for (int c=0; c<3; c++) {
        for(int d = 0 ;d<3; d++){
            scanf("%d", &matrix2[c][d]);
        }
    }

    for (int e = 0; e < 3; e++) {
        for (int f = 0; f < 3; f++) {
            matrixResult[e][f] = matrix1[e][f] * matrix2[e][f];
        }
    }

    printf("\nHere is your Result Matrix : \n");
    for (int g = 0; g < 3; g++) {
        for (int h = 0; h < 3; h++) {
            printf("  %d  ", matrixResult[g][h]);
        }
        printf("\n");
    }

    return 0;
}