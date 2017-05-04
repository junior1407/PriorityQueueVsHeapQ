//
// Created by Valdir Jr on 03/05/2017.
//

#ifndef PRIORITYQUEUEVSHEAPQ_PRIORITYQUEUE_H
#define PRIORITYQUEUEVSHEAPQ_PRIORITYQUEUE_H

#include <stdlib.h>
#include <stdio.h>
typedef struct PriorityQueue PQueue;

/*
 * Data Structure for Priority Queue
 */
typedef struct Node Node;

/*
 * Creates an empty Huffman Tree.
 */
PQueue * NewPQueue(Node * head);
Node * NewNode(int data, int priority);


#endif //PRIORITYQUEUEVSHEAPQ_PRIORITYQUEUE_H
