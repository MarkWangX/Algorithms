/*
 Take the node from the front of the source, and move it to
 the front of the dest.
 It is an error to call this with the source list empty.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void MoveNode(struct node** destRef, struct node** sourceRef)
{
    struct node* head = *sourceRef;
    *sourceRef = head->next;
    head->next = *destRef;
    *destRef = head;
}