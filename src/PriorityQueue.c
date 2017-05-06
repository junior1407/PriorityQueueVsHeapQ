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

int enqueue(PQueue * pq , int data, int priority)
{
    int comparacoes=0;
    Node * new = NewNode(data,priority);
    if (pq->size==0)
    {
        pq->head = new;
        (pq->size)++;
        return comparacoes;
    }

    else if (pq->head->priority < priority)
    {
        comparacoes++;
        new->next=pq->head;
        pq->head=new;
        (pq->size)++;
        return comparacoes;
    }
    else
    {

    }

}
/*
void enqueue(PQueue *pq, int i, int p)

{

    Node *new_node = (Node*) malloc(sizeof(Node));

    new_node->data = i;

    new_node->priority = p;

    if ((is_empty(pq)) || (p > pq->head->priority)) {

        new_node->next = pq->head;

        pq->head = new_node;

    } else {

        Node *current = pq->head;

        while ((current->next != NULL) &&

               (current->next->priority > p)) {

            current = current->next;

        }

        new_node->next = current->next;

        current->next = new_node;

    }

}

*/
