#ifndef HEAP_H
#define HEAP_H

#include <stdio.h>
#include <stdlib.h>

// Estrutura de dados para a Heap
typedef struct Heap Heap;

// Cria uma Heap vazia
Heap * CreateHeap();

// Troca valores da Heap
void swap(int * a, int * b);

// Adiciona um novo valor a Heap
int enqueue(Heap * heap, int item);

void maxHeapify(Heap *heap, int i);

// Remove o primeiro valor da Heap
int dequeue(Heap * heap);

// Cria a Heap e retorna os dados necessários para o gráfico
void makeHeap(Heap * heap);

#endif HEAP_H
