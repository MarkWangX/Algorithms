/*
 Write an iterative Reverse() function that reverses a list by rearranging all the .next
 pointers and the head pointer. Ideally, Reverse() should only need to make one pass of the
 list. The iterative solution is moderately complex. It's not so difficult that it needs to be
 this late in the document, but it goes here so it can be next to #18 Recursive Reverse
 which is quite tricky. The efficient recursive solution is quite complex (see next
 problem). (A memory drawing and some hints for Reverse() are below.)
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void Reverse(struct node** headRef)
{
    struct node* tail = NULL;
    while(*headRef)
    {
        MoveNode(&tail, headRef);
    }
    *headRef = tail;
}