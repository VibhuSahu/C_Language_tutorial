#include <stdio.h>
#include <string.h>
int main()
{
 const char *a[]={ "zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" , 
"eight" , "nine" };
 const char *b[]={ "ten" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , 
"sixteen" , "seventeen" , "eighteen" , "nineteen" };
 const char *c[]={ " " , " " , "twenty" , "thirty" , "forty" , "fifty" , "sixty" , "seventy" , 
"eighty" , "ninety" };
 //const char *p[]={"hundred" , "thousand" };
 char num[10];
 int l,n,n1;
 scanf("%s",num);
 l=strlen(num);
 if(l==4)
 {
 while(l--)
 {
 if(l==3&&num[0]!='0')
 {
 printf("%s thousand ",a[*num- '0']);
 }
 if(l==2 && num[1]!='0' && num[2]=='0'&&num[3]=='0')
 {
 n=num[1]-48;
 printf("%s hundred ",a[n]);
 break;
 }
 if(l==2 && num[1]!='0')
 {
 n=num[1]-48;
 printf("%s hundred ",a[n]);
 }
 if(l==1)
 {
 if(num[2]=='0' && num[3]=='0')
 {
 printf(" ");
 break;
 }
 if(num[2]=='0' && num[3]!='0')
 {
 n=num[3]-48;
 printf("%s",a[n]);
 break;
 }
 if(num[3!='0' && num[2]!='1']&& num[2]!='0')
 {
 n=num[2]-48;
 n1=num[3]-48;
 printf("and %s %s",c[n],a[n1]);
 break;
 }
 if(num[3]=='0');
 {
 n=num[2]-48;
 printf("and %s",c[n]);
 break;
 }
 if(num[2]=='1');
 {
 n=num[3]-48;
 printf("and %s",b[n]);
 break;
 }
 }
 }
 }
return 0;
}