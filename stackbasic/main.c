#include <stdio.h>
#include <stdlib.h>
#define S 5
int s[10];
int top;
int item;

void push(){
    if(top==S-1){
        printf("Stack overflow");
        return;
    }
    printf("\f Pushing %d",item);
    top=top+1;
    s[top]=item;

}
int pop(){
    if(top==-1)
            return 0;
    int it=s[top];
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

    int choice;
    top=-1;
    while(3<4){
     printf("\nEnter 1: Push 2:Pop 3: Display 4: Exit\n");
     scanf("%d",&choice);
     switch(choice){
     case 1:
         printf("what to push?\n");
         scanf("%d",&item);
         push();
         break;
     case 2:
         item=pop();
         if(item==0)
            printf("stack is empty");
        else
            printf("item deleted is : %d",item);
         break;
     case 3:
        display();
        break;
     case 4:
        exit(0);
         break;
    }


}return 0;}
