#include <stdio.h>
int main(){
    struct point{
    int x;
    int y;
    };
    printf("Two numbers");
    typedef struct point pt;
    int m,n;
    scanf("%d%d",&m,&n);
    struct point f=makepoint(m,n);
    printf("%d, %d",f.x,f.y);
    typedef struct point pt;

	struct rect{
	pt p1;
	pt p2;
	};

	typedef struct rect rt;
}
pt makepoint(int x,int y){

    pt p;
    p.x=x;
    p.y=y;
    return p;

}



