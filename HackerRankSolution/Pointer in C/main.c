#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function 
    int A = *a + *b;
    int B = abs(*a - *b);

    *a = A;
    *b = B;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

/*
Output :
4 5         // user input
9
1
*/