// Takes a list, deallocates all of its memory and sets its
// head pointer to NULL (the empty list).

#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void DeleteList(struct node** headRef) 
{
    struct node* temp = *headRef;
    while(*headRef != NULL)
    {
        temp = (*headRef)->next;
        free(*headRef);
        (*headRef) = temp;
    }
}