/*
 Given the source list, split its nodes into two shorter lists.
 If we number the elements 0, 1, 2, ... then all the even elements
 should go in the first list, and all the odd elements in the second.
 The elements in the new lists may be in any order.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void AlternatingSplit(struct node* source, struct node** aRef, struct node** bRef)
{
    int idx = 0;
    while(source)
    {
        if(idx == 0) MoveNode(aRef, &source);
        if(idx == 1) MoveNode(bRef, &source);
        idx = (idx + 1) % 2;
    }
}