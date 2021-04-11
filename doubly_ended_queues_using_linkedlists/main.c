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
void display_stack(NODE first){
NODE cur=first;
if(first==NULL){
    printf("empty list");
}
else
{
    while(cur!=NULL)
    {
        printf("|%d|\n",cur->data);
        cur=cur->link;
    }
    cur=first;
}
}
void display_queue(NODE first){
NODE cur=first;
if(first==NULL){
    printf("empty list");
}
else
{
    while(cur!=NULL)
    {
        printf("%d ",cur->data);
        cur=cur->link;
    }
    cur=first;
}
}
NODE delete_front(NODE first){
NODE temp=first;
if(first==NULL){
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
    NODE first;

    int choice;

    first=NULL;
    for(;;){
    printf("\n1. Insert front 2. Insert rear\n3. Delete front 4. Delete rear\n5. Display      6. End\n ");
    scanf("%d",&choice);
    int item;
    switch(choice){
    case 1:

        printf("\nElement to be pushed to front : ");
        scanf("%d",&item);
        first=insert_front(item,first);
        break;
    case 2:

        printf("\nElement to be pushed to rear: ");
        scanf("%d",&item);
        first=insert_rear(item,first);
        break;
    case 3:
        printf("\nElement deleted from font ");
        first=delete_front(first);
        break;
    case 4:
        printf("\nElement deleted from rear");
        first=delete_rear(first);
        break;
    case 5:
        display_queue(first);
        break;
    case 6:
        exit(0);
    default:
        printf("\nEnter valid choice please");
    }
    }
}









