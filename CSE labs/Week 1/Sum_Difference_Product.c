#include <stdio.h>
#include <math.h>
int main()
{
int a,b;
printf("Enter two numbers" );
scanf("%d%d",&a,&b);
int s,d,p;
s=a+b;
d=abs(a-b);
p=a*b;
printf("Sum is %d Difference is %d Product is %d",s,d,p);
}
