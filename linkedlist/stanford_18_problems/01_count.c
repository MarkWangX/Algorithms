/*
 Given a list and an int, return the number of times that int occurs
 in the list.
*/

#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

int Count(struct node* head, int searchFor) {
    int count = 0;
    struct node* current = head;
    while(current != NULL)
    {
        if (current->data == searchFor) {count++;}
        current = current->next;
    }
    return count;
}