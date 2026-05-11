/*
 Remove duplicates from a sorted list.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void RemoveDuplicates(struct node* head)
{
    while(head && head->next)
    {
        if(head->data == head->next->data)
        {
            struct node* tmp = head->next->next;
            free(head->next);
            head->next = tmp;
        }
        else
        {
            head = head->next;
        }
    }
}