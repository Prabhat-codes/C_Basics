#include <stdio.h>
int main()
{
float l;float i;
printf("Enter length in inches " );
scanf("%e",&l);
i=l*2.54;
printf("%f is the length of the object %f in centimeters ",i,l);
}
