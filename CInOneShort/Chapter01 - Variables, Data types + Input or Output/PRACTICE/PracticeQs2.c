// # 2. Write a program to calculate area of a circle. (side is given) 
#include<stdio.h>


int main() {
    const float pi = 22 / 7;
    float radius, area;

    printf(" Enter the Radius :  ");
    scanf("%f", &radius);
    
    
    // Formula for calculating Area
    area = pi * (radius * radius);

    printf(" Area of a Circle is %f\n", area);

    return 0;
}

/*
Output : 
 Enter the Radius :  5
 Area of a Circle is 75.000000
*/