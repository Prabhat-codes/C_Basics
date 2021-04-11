    #include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,g;
float d,D,U,R1,R2,T,M;
printf("Enter coefficient of x square:");
scanf("%d",&a);
printf("Enter coefficient of x:");
scanf("%d",&b);
printf("Enter constant:");
scanf("%d",&c);
d=b*b-4*a*c;
D=sqrt(d);
R1=(-b+D)/(2*a);
R2=(-b-D)/(2*a);
U=(float)-b/(2*a);
T=-d;
M=(float)sqrt(T)/(2*a);

if (d>0)
{g=1;}
if(d==0)
{g=2;}
if(d<0)
{g=3;}

switch(g)
{
case 1:
printf("\n two roots (real and unequal)\n%f and %f",R1,R2);
break;
case 2:
printf("\n two roots (real and equal)\n%f and %f",U,U);
break;
case 3:
printf("\n Roots are %f+i%f and %f-i%f",U,M,U,M);
break;
default:
    printf("error");
}
}
