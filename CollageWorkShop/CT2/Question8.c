// # QUES 8: wap to perform simple interest using function with argument and  no return data type 
#include<stdio.h>

void simple_int1(float p,float r,float t);
float simple_int2(float p,float r,float t);

int main() {
    float a,b,c;
    
    printf("enter   the   principle    : ");
    scanf("%f",&a);
    printf("enter the rate of interest : ");
    scanf("%f",&b);
    printf("enter   the     time       : ");
    scanf("%f",&c);
    simple_int1(a,b,c);

    float interest = simple_int2(a,b,c);
    printf("simple interest=%.2f\n",interest);
    

    return 0;
}

void simple_int1(float p,float r,float t){
    float si;
    si=(p*r*t)/100;
    printf("simple interest=%.2f\n",si);
}

float simple_int2(float p,float r,float t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}
