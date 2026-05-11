/*
 Merge the nodes of the two lists into a single list taking a node
 alternately from each list, and return the new list.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void InsertTail(struct node* headRef, int data)
{
    while(headRef->next)
    {
        headRef = headRef->next;
    }
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    headRef->next = newNode;
}

struct node* ShuffleMerge(struct node* a, struct node* b)
{
    struct node* result = NULL;
    while(a && b)
    {
        InsertTail(&result, a->data);
        InsertTail(&result, b->data);
        a = a->next;
        b = b->next;
    }
    if(a == NULL)
    {
        while(b)
        {
            InsertTail(&result, b->data);
            b = b->next;
        }
    }
    if(b == NULL)
    {
        while(a)
        {
            InsertTail(&result, a->data);
            a = a->next;
        }
    }
    return result;
}