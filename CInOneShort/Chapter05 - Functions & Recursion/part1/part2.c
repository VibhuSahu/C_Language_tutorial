// # Pass Arrays as Function Parameters 
#include <stdio.h>

void printArray(int arr[], int size) { 
    printf("\n\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

}


int main() {
    int sizeArray, arrays[100];
    scanf("%d", &sizeArray);
    for (int i=0 ; i<sizeArray ; i++) {
        scanf("%d",&arrays[i]);
    }
    printArray(arrays, sizeArray);
}
/*
Output : 
10      <-- User input
1   <-- User input
2   <-- User input
3   <-- User input
4   <-- User input
5   <-- User input
6   <-- User input
7   <-- User input
8   <-- User input
9   <-- User input
10  <-- User input


1 2 3 4 5 6 7 8 9 10 


*/