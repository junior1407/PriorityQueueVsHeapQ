//
// Created by Valdir Jr on 03/05/2017.
//

#include "../inc/PriorityQueue.h"

struct PriorityQueue {

    int size;
    struct Node * head;
};

struct Node{
    int data;
    int priority;
    Node * next;
};

PQueue * NewPQueue(Node * head)
{
    PQueue * newPQueue= (PQueue*)malloc(sizeof(PQueue));
    newPQueue->size=0;
    newPQueue->head=head;
}
Node * NewNode(int data, int priority)
{
    Node * newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;
    newNode->priority= priority;
}



