/*
 Are you ready to accomplish the last problem!
 (This problem is difficult and is only possible if you are familiar with recursion.) There is
 a short and efficient recursive solution to this problem. As before, the code should only
 make a single pass over the list. Doing it with multiple passes is easier but very slow, so
 here we insist on doing it in one pass.. Solving this problem requires a real understanding
 of pointer code and recursion.
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void RecursiveReverse(struct node** headRef) 
{
    if(*headRef == NULL || (*headRef)->next == NULL) return;
    struct node* first = *headRef;
    struct node* rest = first->next;
    RecursiveReverse(&rest);
    first->next->next = first;
    first->next = NULL;
    *headRef = rest;
}