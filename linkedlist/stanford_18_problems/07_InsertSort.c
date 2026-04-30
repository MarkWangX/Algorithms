/*
 Given a list, rearranges its nodes so they are sorted in
 increasing order. It should use SortedInsert().
*/

#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void InsertSort(struct node** headRef)
{
    struct node* current = (*headRef)->next;
    struct node* traverse;
    struct node* prev;
    while(current->next != NULL)
    {
        traverse = (*headRef);
        while(traverse->data < current->data)
        {
            traverse = traverse->next;
            prev = traverse;
        }
        prev->next = current;
        current->next = traverse;
        current = current->next;
    }
}