// Given a list and an index, return the data
// in the nth node of the list. The nodes are numbered from 0.
// Assert fails if the index is invalid (outside 0..lengh-1).

#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>
#include <assert.h>

//This is my answer, but it has the problem of double traversing.
int GetNth(struct node* head, int index) 
{
    int length = len(head);
    assert(index >= 0 && index < length);

    struct node* current = head;
    int idx = 0;
    while(idx != index)
    {
        current = current->next;
        idx++;
    }
    return (current->data);
}

// Correct answers by Stanford.
int GetNth(struct node* head, int index) {
    struct node* current = head;
    int count = 0;  // the index of the node we're currently looking at
    while (current != NULL) {
        if (count == index) return(current->data);
        count++;
        current = current->next;
    }
    assert(0);  // if we get to this line, the caller was asking
                // for a non-existent element so we assert fail.
}