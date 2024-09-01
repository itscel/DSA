#include "cursorbase.h"
#include <stdio.h>

int main()
{
    VHeap CB;

    init(&CB);
    insert(&CB, 'C');
    insert(&CB, 'E');
    insert(&CB, 'A');
    insert(&CB, 'B');
    display(CB);
}