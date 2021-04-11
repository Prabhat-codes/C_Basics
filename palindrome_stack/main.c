#include <stdio.h>
#include <stdlib.h>
#define S 5
char s[10];
int top;
char item;

void push(char  ){
    if(top==S-1){
        printf("Stack overflow");
        return;
    }
    printf("\f Pushing %d",item);
    top=top+1;
    s[top]=item;

}
char pop(){

    if(top==-1)
            return 0;
    char it=s[top];
    top=top-1;
    return(it);
}
void display(){
    if(top==-1){
        printf("error");
        return;
    }
for(int i=0;i<=top;i++){
    printf("\f Position : %d Data : %d \n",i,s[i]);
}
}
void main(){

    printf("Enter a word to check please ");
    scanf("%s",&s);
    char s1[15];
    top=strlen(s)-1;
    printf("\nThe word that you entered was : %s",s);

    for(int i=0;i<strlen(s);i++){
        item=pop();

        s1[i]=item;
    }
    printf("\n");
    printf("\nThe word that you get is: %s",s1);
    printf("\n");
    if(strcmp(s,s1)==0){
        printf("\nPALINDROME");
    }
    else
        printf("\nNOT A PALINDROME");


return 0;}
