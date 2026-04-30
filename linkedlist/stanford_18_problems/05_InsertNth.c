/*
 A more general version of Push().
 Given a list, an index 'n' in the range 0..length,
 and a data element, add a new node to the list so
 that it has the given index.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void InsertNth(struct node** headRef, int index, int data) 
{
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    if (index == 0)
    {
        newNode->next = (*headRef);
        (*headRef) = newNode;
        return;
    }
    struct node* current = (*headRef);
    for (int i = 0; i < index-1; i++)
    {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}

// Answers given by stanford
void InsertNth(struct node** headRef, int index, int data) {
    // position 0 is a special case...
    if (index == 0) Push(headRef, data);
    else {
        struct node* current = *headRef;
        int i;
        for (i=0; i<index-1; i++) {
        assert(current != NULL); // if this fails, index was too big
        current = current->next;
        }
        assert(current != NULL); // tricky: you have to check one last time
        Push(&(current->next), data); // Tricky use of Push() --
        // The pointer being pushed on is not
        // in the stack. But actually this works
        // fine -- Push() works for any node pointer.
    }
}
