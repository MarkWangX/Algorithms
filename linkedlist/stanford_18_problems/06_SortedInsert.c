/*
 Given a list that is sorted in increasing order, and a
 single node, inserts the node into the correct sorted position in the list. While Push()
 allocates a new node to add to the list, SortedInsert() takes an existing node, and just
 rearranges pointers to insert it into the list. There are many possible solutions to this
 problem.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void SortedInsert1(struct node** headRef, struct node* newNode) 
{
    if(*headRef == NULL || (*headRef)->data > newNode->data) 
    {
        newNode->next = (*headRef);
        *headRef = newNode;
    }
    else
    {
        struct node* current = *headRef;
        while(current->next!=NULL && current->next->data < newNode->data)
        {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void SortedInsert2(struct node** headRef, struct node* newNode) 
{
    struct node dummy;
    struct node* current = &dummy;
    dummy.next = *headRef;

    while(current->next!=NULL && current->next->data < newNode->data)
    {
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void SortedInsert3(struct node** headRef, struct node* newNode) 
{
    struct node** current = headRef;
    while((*current)!=NULL && (*current)->data < newNode->data)
    {
        current = &((*current)->next);
    }
    newNode->next = *current;
    *current = newNode;
}