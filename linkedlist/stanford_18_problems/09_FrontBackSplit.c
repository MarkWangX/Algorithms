/*
 Split the nodes of the given list into front and back halves,
 and return the two lists using the reference parameters.
 If the length is odd, the extra node should go in the front list.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void FrontBackSplit(struct node* source,
                    struct node** frontRef, struct node** backRef) 
{
    if(source == NULL || source->next == NULL)
    {
        *frontRef = source;
        *backRef = NULL;
        return;
    }
    struct node* slow = source;
    struct node* fast = source;
    while(fast && fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    *frontRef = source;
    *backRef = slow->next;
    slow->next = NULL;
}