#include <conio.h>
int main()
{
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
int temp=a;
a=b;
b=temp;
printf("The swapped numbers are %d and %d",a,b);

}
