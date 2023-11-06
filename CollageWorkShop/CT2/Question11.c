// # Ques 11 : write a function reads two numbers and evaluate whether they are coprime or not 
#include<stdio.h>

int main()
{
    int  a,b,hcf;
    printf("enter the two numbers : ");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    if(hcf==1)
        printf("%d and %d are coprime",a,b);
    else
        printf("%d and %d are  non cooprime",a,b);
    return 0;
}