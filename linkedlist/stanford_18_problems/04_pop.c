/*
 The opposite of Push(). Takes a non-empty list
 and removes the front node, and returns the data
 which was in that node.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

int Pop(struct node** headRef) 
{
    assert(*headRef != NULL);
    struct node* temp = (*headRef)->next;
    int data = (*headRef)->data;
    free(*headRef);
    (*headRef) = temp;
    return data;
}

// Answers given by stanford
int Pop(struct node** headRef) {
    struct node* head;
    int result;
    head = *headRef;
    assert(head != NULL);
    result = head->data; // pull out the data before the node is deleted
    *headRef = head->next; // unlink the head node for the caller
    // Note the * -- uses a reference-pointer
    // just like Push() and DeleteList().
    free(head); // free the head node
    return(result); // don't forget to return the data from the link
}
