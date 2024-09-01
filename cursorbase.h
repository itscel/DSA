#ifndef CURSORBASE_H
#define CURSORBASE_H
#include <stdio.h>
#define MAX 10

typedef struct{
    char data;
    int next;
}Node;

typedef struct{
    Node elem[MAX];
    int avail;
}CBase;

void init(CBase *CB){
    int i;


    for(i=MAX-1;i>=0;i--){
        CB->elem[i].next=i-1;
    }
    CB->avail=9;
}

void insert(CBase *CB, char elem){

    if(CB->avail>-1){
        CB->elem[CB->avail].data=elem;
        CB->avail--;
    }
}