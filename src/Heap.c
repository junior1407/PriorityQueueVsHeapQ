#include "../inc/Heap.h"
#define MAXSIZE 100

struct Heap {
    int size;
    int data[MAXSIZE];
};

Heap * CreateHeap() {
    Heap * newHeap = (Heap*)malloc(sizeof(Heap));
    newHeap->size = 0;
    return newHeap;
}

void swap(int * a, int * b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int enqueue(Heap * heap, int item) {
    int cont = 0;
    if(heap->size >= MAXSIZE) {
        printf("Heap Overflow");
    } else {
        heap->data[++heap->size] = item;
        int keyIndex = heap->size;
        int parentIndex = heap->size / 2;
        while((parentIndex >= 1) && (heap->data[keyIndex] > heap->data[parentIndex])) {
            cont++;
            swap(&heap->data[keyIndex], &heap->data[parentIndex]);
            keyIndex = parentIndex;
            parentIndex = keyIndex / 2;
        }
    }
    return cont;
}

void maxHeapify(Heap *heap, int i) {
    int largest;
    int left_index = 2 * i;
    int right_index = 2 * i + 1;
    if (left_index <= heap->size && heap->data[left_index] > heap->data[i]) {
        largest = left_index;
    } else {
        largest = i;
    }
    if (right_index <= heap->size && heap->data[right_index] > heap->data[largest]) {
        largest = right_index;
    }
    if (heap->data[i] != heap->data[largest]) {
        swap(&heap->data[i], &heap->data[largest]);
        maxHeapify(heap, largest);
    }
}

int dequeue(Heap * heap) {
    if(heap->size <= 0) {
        printf("Heap Underflow");

        return -1;
    } else {
        int item = heap->data[1];
        heap->data[1] = heap->data[heap->size--];
        maxHeapify(heap, 1);

        return item;
    }
}

void makeHeap(Heap * heap) {
    int x;
    while(scanf("%d", &x) != EOF) {
        printf("%d;%d;HEAP\n", heap->size - 1, enqueue(heap, x));
    }
}