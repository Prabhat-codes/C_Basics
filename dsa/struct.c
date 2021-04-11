#include <stdio.h>
int main(){
    struct point{
    int x;
    int y;
    }p1,p2;
    printf("Two numbers");
    struct point pt;
    int m,n;
    scanf("%d%d",&m,&n);
    struct point f=makepoint(m,n);
    printf("%d, %d",f.x,f.y);


	struct rect{
	p1;
	p2;
	}r1;

	typedef struct rect rt;
}

struct point makepoint(int x,int y){

    point p;
    p.x=x;
    p.y=y;
    return p;

}




