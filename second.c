#include <stdio.h>
int main(){
struct StudentInfo{
char name[20];
int rno;
};

struct StudentInfo s1={"Raj",2};
struct StudentInfo s2={"Prabhat",1};
printf("%s %d ",&s1.name,s1.rno);
printf("%s %d",&s2.name,s2.rno);

}
