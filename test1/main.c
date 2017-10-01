#include<stdio.h>
#define N 5

int Q[N];
int front;
int rear;

void traverse(){
    if(front==-1){
        printf("Underflow\n");
        return;
    }
    int i=0;
    for(;i<N;i++){
        printf("%d\t", Q[i]);
    }
    printf("\n");
}

void insert(int value){
    if(front==-1 && rear==-1){
        Q[++front]=value;
        ++rear;
        return;
    }
    if(front>=rear+1 || (front==0 && rear==N-1)){
        printf("Overflow\n");
        return;
    }
    rear=(rear+1)%N;
    Q[rear]=value;
}

void delete(){
    if(front==-1 && rear==-1){
        printf("Underflow\n");
        return;
    }
    if(front==rear){
        front=-1;
        rear=-1;
        return;
    }
    Q[front]=0;
    front=(front+1)%N;
}

int main(){
    front=-1;
    rear=-1;

    traverse();
    insert(1);
    traverse();
    insert(2);
    traverse();
    insert(3);
    traverse();
    delete();
    traverse();
    insert(4);
    traverse();
    insert(5);
    traverse();
    insert(6);
    traverse();
    insert(7);
    traverse();
    delete();
    traverse();
    delete();
    traverse();
    delete();
    traverse();
    delete();
    traverse();
    delete();
    traverse();
    return 0;
}
