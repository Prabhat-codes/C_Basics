#include <stdio.h>
#include <stdlib.h>

#define mall(p,n,type)\
p=(type*)malloc(n*sizeof(type));\
if(p==NULL)\
{\
    printf("Insuffecient space");\
}\

int darray()
{   printf("\n Enter numbers please");
    printf("Enter number of rows and columns");
    int r,c;
    scanf("%d %d",&r,&c);
    int **p;
    mall(p,r,int*);

    for(int i=0;i<r;i++){
        mall(p[i],c,int);
    }
}
int main()
{

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



