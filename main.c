#include <stdio.h>
#include "inc/PriorityQueue.h"
#include "stdlib.h"
#include <time.h>
#include "inc/Heap.h"
int main() {
    /* PQueue * pq = NewPQueue();
     int numero;
     FILE * file = fopen("C:\\Users\\Valdir Jr\\Documents\\GitHub\\PriorityQueueVsHeapQ\\numeros.txt","r");

     int i;
     while( fscanf(file, "%d\n", &numero ) != EOF )
     {
         printf("%d\n",Enqueue(pq,1,numero));
     }
     return 0;
 }
 */

    Heap * heap = CreateHeap();
    HEnqueue(heap, 10);
    HEnqueue(heap, 15);
    HEnqueue(heap, 30);
    HEnqueue(heap, 12);
    PrintHeap(heap);
    return 0;
}
