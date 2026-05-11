/*
 Compute a new sorted list that represents the intersection
 of the two given sorted lists.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

struct node* SortedIntersect(struct node* a, struct node* b)
{
    struct node dummy;
    dummy.next = NULL;
    struct node* tail = &dummy;
    while(a && b)
    {
        if(a->data == b->data)
        {
            push(&(tail->next), a->data);
            tail = tail->next;
            a = a->next;
            b = b->next;
        }
        else if(a->data < b->data) 
        {
            a = a->next;
        }
        else
        {
            b = b->next;
        } 
    }
    return (dummy.next);
}