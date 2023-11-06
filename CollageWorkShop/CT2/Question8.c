// # QUES 8: wap to perform simple interest using function with argument and  no return data type 
#include<stdio.h>

void simple_int(float p,float r,float t);

void main() {
    float a,b,c;
    
    printf("enter the principle");
    scanf("%f",&a);
    printf("enter the rate of interest");
    scanf("%f",&b);
    printf("enter the time");
    scanf("%f",&c);
    simple_int(a,b,c);

    
}

void simple_int(float p,float r,float t){
    float si;
    si=(p*r*t)/100;
    printf("simple interest=%.2f",si);
}