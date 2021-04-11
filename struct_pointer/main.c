#include <stdio.h>
#include <stdlib.h>
struct point{
int x;
int y;
};

struct rect{
struct point p1;
struct point p2;
}rect1;

typedef struct point pointType;

pointType makePoint(int x,int y){
pointType temp;
temp.x=x;
temp.y=y;
return temp;
}
pointType point1,point2,*ptr;

int main()
{
    point1=makePoint(2,3);
    ptr=&point1;
    printf("%d y %d",(*ptr).x,ptr->y);
    return 0;
}
