#include <stdio.h>
#include <stdlib.h>

#define mall(p,n,type)\
p=(type*)malloc(n*sizeof(type));\
if(p==NULL)\
{\
    printf("Insuffecient space");\
}\

int main()
{
    printf("Enter number of observations");
    int n;
    scanf("%d",&n);
    int *p;
    mall(p,n,int);
    printf("\n Enter numbers please");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    int max=p[0];
    for(int i=0;i<n;i++){
        if(p[i]>p[0]){
            max=p[i];
            continue;
        }
    }
    printf("\n Maximum number: %d",max);
    return 0;



}

