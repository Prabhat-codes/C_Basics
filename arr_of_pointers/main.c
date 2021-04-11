#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct{
    char name[25];
    int mt[3];
    int final;
    }Stu;
    Stu abc[5];
    int i,sum=0;
    float avg[3];
    Stu *pw;
    Stu *pl;
    pl=pw+5-1;
    for(pw=abc;pw<=pl;pw++){
        sum=sum+pw->mt[i];
    }
    sum=sum/(float)5;

}
