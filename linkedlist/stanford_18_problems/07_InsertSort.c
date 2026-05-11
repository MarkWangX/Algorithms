/*
 Given a list, rearranges its nodes so they are sorted in
 increasing order. It should use SortedInsert().
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void InsertSort(struct node** headRef)
{
    struct node* result = NULL;
    struct node* current = *headRef;
    struct node* next = NULL;
    while(current)
    {
        next = current->next;
        SortedInsert(&result, current);
        current = next;
    }
    *headRef = result;
}