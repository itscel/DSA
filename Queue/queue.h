#ifndef QUEUE_H
#define QUEUE_H

typedef struct node{
    char data;
    struct node* next;
}List;

typedef struct{
    List *front;
    List *rear;
}Queue;

void init(Queue *QL){
    QL->front=NULL;
    QL->rear=NULL;
}