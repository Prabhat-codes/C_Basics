#include<stdio.h>
int main()
{
printf("Enter 3 numbers");
int a,b,c,s;
scanf("%d%d%d",&c,&a,&b);
s=(a<b)?((a<c)?a:c):((b<c)?b:c);
printf("smallest number is %d",s);
}
