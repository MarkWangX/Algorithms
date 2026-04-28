#ifndef BASIC_OPERATIONS_H
#define BASIC_OPERATIONS_H

struct node {
    int data;
    struct node* next;
};
typedef struct node* List;

void push(struct node** headRef, int newData);
int len(struct node* head);
struct node* BuildOneTwoThree();

#endif