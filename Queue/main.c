#include <stdio.h>
#include "queue.h"

int main()
{
    Queue QL;

    init(&QL);
    insert(&QL, 'c');
    display(&QL);
}
