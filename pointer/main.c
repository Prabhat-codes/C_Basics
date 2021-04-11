#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[15]={1,2,3,4,5,6,7,8,9,0,1,2,3,4};
 int *p;
 for (int i=0;i<15;i++){
    printf(a[i]);
}
 p=&a;
 for(int i=0;i<14;i++){
        for(int j=i+1;j<14;j++){
   int *t;
   if(*(p+i)<*(p+j)){
        *t=*p;
        *p=*(p+1);
        *(p+1)=*t;
   }}
 }
for (int i=0;i<15;i++){
    printf(a[i]);
}
}
