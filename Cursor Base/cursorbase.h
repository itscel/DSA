#ifndef CURSORBASE_H
#define CURSORBASE_H
#include <stdio.h>
#define MAX 10

typedef struct
{
    char data;
    int next;
} Node;

typedef struct
{
    Node elem[MAX];
    int avail;
} CBase;

void init(CBase *CB)
{
    int i;

    for (i = MAX - 1; i >= 0; i--)
    {
        CB->elem[i].next = i - 1;
    }
    CB->avail = 9;
}

void insert(CBase *CB, char elem)
{
    int x;
    if (CB->avail > -1)
    {
        CB->elem[CB->avail].data = elem;
        CB->avail--;
    }
}

void display(CBase CB)
{
    int x;
    if (CB.avail <= MAX - 1)
    {
        for (x = MAX - 1; x != CB.avail; x = CB.elem[x].next)
        {
            printf("Value: %c", CB.elem[x].data);
        }
    }
}

#endif
