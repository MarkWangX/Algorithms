#include<stdlib.h>
#include"BasicOperations.h"

// Given a reference (pointer to pointer) to the head
// of a list and an int, push a new node on the front of the list.
// Creates a new node with the int, links the list off the .next of the
// new node, and finally changes the head to point to the new node.
void push(struct node** headRef, int newData)
{
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = newData;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}

// Return the number of nodes in a list
int len(struct node* head)
{
    int count = 0;
    struct node* current = head;
    while(current)
    {
        count++;
        current = current->next;
    }
    return count;
}

// Build and return the list {1, 2, 3}
struct node* BuildOneTwoThree()
{
    struct node* head = NULL;
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    return head;
}