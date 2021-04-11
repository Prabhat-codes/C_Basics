#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int r;
    int i;
    }complex;

complex sum(complex m,complex n);
complex product(complex m,complex n);

complex sum(complex a,complex b){
complex f;
f.r=a.r+b.r;
f.i=a.i+b.i;
return f;
}

complex product(complex a,complex b){
complex f;
f.r=a.r*b.r;
f.i=a.i*b.i;
return f;
}

int main()
{
    complex c1={1,2};
    complex c2={4,5};
    complex p=product(c1,c2);
    complex s=sum(c1,c2);
    printf("Sum : %d + %di",s.r,s.i);
    printf("Product: %d + %d i",p.r,p.i);
}
