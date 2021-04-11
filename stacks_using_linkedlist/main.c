#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *link;
};

typedef struct node* NODE;

//NODE first=NULL;

NODE getnode(){
NODE x;
x=(NODE)malloc(sizeof(struct node));
x->data=NULL;
x->link=NULL;
return x;
}

NODE insert_front(int item, NODE first){
NODE temp;
temp=getnode();
temp->data=item;
temp->link=first;
first=temp;
return temp;
}

void display(NODE first){
NODE cur=first;
if(first==NULL){
    printf("empty list");
}
else
{
    while(cur!=NULL)
    {
        printf("%d\n",cur->data);
        cur=cur->link;
    }
    cur=first;
}
}

NODE delete_front(NODE first){
NODE temp=first;
if(first=NULL){
    printf("empty list");
}
temp=temp->link;
free(first);
return temp;
}

NODE insert_rear(int item,NODE first){

NODE cur=first;

NODE temp=getnode();
temp->link=NULL;
temp->data=item;

if(first==NULL){
    return temp;
}

while(cur->link!=NULL){
    cur=cur->link;
}

cur->link=temp;

return first;
}

NODE delete_rear(NODE first){
if(first==NULL){
    printf("List is empty");
    return first;
}
if(first->link==NULL){
free(first);
}
NODE prev,cur;
cur=first;
prev=NULL;
while(cur->link!=NULL){
    prev=cur;
    cur=cur->link;
}
prev->link=NULL;
free(cur);
return first;
}
int main(){

    int choice;
    NODE first;
    first=NULL;
    for(;;){
        printf("\nEnter 1 to push 2 to pop 3 to display and 4 to exit: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("\nEnter element to push ");
            int e;
            scanf("%d",&e);
            first=insert_front(e,first);
            break;
        case 2:
            printf("\nElement popped ");
            first=delete_front(first);
            break;
        case 3:
            display(first);
            printf("Back to case 3");
            break;
        case 4:
            printf("\n Thank you");
            exit(0);
            break;
        }

    }
}
