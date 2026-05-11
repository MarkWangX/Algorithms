/*
(This problem requires recursion) Given FrontBackSplit() and SortedMerge(), it's pretty
easy to write a classic recursive MergeSort(): split the list into two smaller lists,
recursively sort those lists, and finally merge the two sorted lists together into a single
sorted list. Ironically, this problem is easier than either FrontBackSplit() or
SortedMerge().
*/
#include "../Basic_Operations/BasicOperations.h"
#include <stdlib.h>

void MergeSort(struct node** headRef) 
{
    if(*headRef == NULL || (*headRef)->next == NULL) return;
    struct node* frontRef = NULL;
    struct node* backRef = NULL;
    FrontBackSplit(*headRef, &frontRef, &backRef); 
    MergeSort(&frontRef);
    MergeSort(&backRef);
    *headRef = SortedMerge(frontRef, backRef);
}