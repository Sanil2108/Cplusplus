#include <stdio.h>
#include <stdlib.h>
struct node{
    int value;
    struct node * link;
};
struct node * start;

void traverse(){
    struct node *p=start;
    do{
        printf("%d\t", p->value);
        p=p->link;
    }
    while(p!=start);
    printf("\n");
}

void insertFront(int value){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->value=value;
    temp->link=start;
    start=temp;
    while(temp!=start){
        temp=temp->link;
    }
    temp->link=start;
}

void insertBack(int value){
    struct node *p=start;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    while(p->link!=start){
        p=p->link;
    }
    new->value=value;
    new->link=start;
    p->link=new;
}

void deleteBack(){
    struct node *p=start;
    struct node *new=(struct node *)malloc(sizeof(struct node));
    while(p->link->link!=NULL){
        p=p->link;
    }
    p->link=NULL;
}

void deleteFront(){
    start=start->link;
}

int main(){
    start=NULL;
    insertFront(3);
    traverse();
    insertFront(2);
    traverse();
    insertFront(1);
    traverse();
    insertBack(4);
    traverse();
    insertBack(5);
    traverse();
    insertBack(6);
    traverse();
    // deleteBack();
    // traverse();
    // deleteBack();
    // traverse();
    // deleteBack();
    // traverse();
    // deleteFront();
    // traverse();
    // deleteFront();
    // traverse();
    // deleteFront();
    // traverse();
    return 0;
}
