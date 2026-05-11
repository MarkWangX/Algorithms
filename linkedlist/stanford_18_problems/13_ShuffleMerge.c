/*
 Merge the nodes of the two lists into a single list taking a node
 alternately from each list, and return the new list.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

/*
 Solution 1 given by myself
*/
 void InsertTail(struct node** headRef, int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(*headRef == NULL)
    {
        *headRef = newNode;
    }
    else
    {
        struct node* current = *headRef;
        while(current->next)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    
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
    if(a == NULL && b != NULL)
    {
        while(b)
        {
            InsertTail(&result, b->data);
            b = b->next;
        }
    }
    if(b == NULL && a != NULL)
    {
        while(a)
        {
            InsertTail(&result, a->data);
            a = a->next;
        }
    }
    return result;
}

/*
    Solution 2 given by stanford
*/
struct node* ShuffleMerge(struct node* a, struct node* b) {
    struct node dummy;
    struct node* tail = &dummy;
    dummy.next = NULL;
    while (1) {
        if (a==NULL) { // empty list cases
            tail->next = b;
            break;
        }
        else if (b==NULL) {
            tail->next = a;
            break;
        }
        else { // common case: move two nodes to tail
            tail->next = a;
            tail = a;
            a = a->next;
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }
    return(dummy.next);
}

/*
    Solution 3 given by stanford
*/
struct node* ShuffleMerge(struct node* a, struct node* b) {
    struct node dummy;
    struct node* tail = &dummy;
    dummy.next = NULL;
    while (1) {
        if (a==NULL) {
            tail->next = b;
            break;
        }
        else if (b==NULL) {
            tail->next = a;
            break;
        }
        else {
            MoveNode(&(tail->next), &a);
            tail = tail->next;
            MoveNode(&(tail->next), &b);
            tail = tail->next;
        }
    }
    return(dummy.next);
}

/*
    Solution 4 given by stanford
*/
struct node* ShuffleMerge(struct node* a, struct node* b) {
    struct node* result = NULL;
    struct node** lastPtrRef = &result;
    while (1) {
        if (a==NULL) {
            *lastPtrRef = b;
            break;
        }
        else if (b==NULL) {
            *lastPtrRef = a;
            break;
        }
        else {
            MoveNode(lastPtrRef, &a);
            lastPtrRef = &((*lastPtrRef)->next);
            MoveNode(lastPtrRef, &b);
            lastPtrRef = &((*lastPtrRef)->next);
        }
    }
    return(result);
}
