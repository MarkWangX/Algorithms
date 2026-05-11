/*
 Takes two lists sorted in increasing order, and
 splices their nodes together to make one big
 sorted list which is returned.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void MoveNode(struct node** destRef, struct node** sourceRef);

struct node* SortedMerge(struct node* a, struct node* b) 
{
    struct node dummy;
    struct node* tail = &dummy;
    dummy.next = NULL;
    while (1) {
        if (a==NULL) {
            tail->next = b;
            break;
        }
        else if (b==NULL) {
            tail->next = a;
            break;
        }
        else {
            if(a->data < b->data)
            {
                MoveNode(&(tail->next), &a);
            }
            else
            {
                MoveNode(&(tail->next), &b);                           
            }
            tail = tail->next;
        }
    }
    return(dummy.next);
}