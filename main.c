#include <stdio.h>
#include "inc/Heap.h"
#include "inc/PriorityQueue.h"
int main() {
    PQueue * pq = NewPQueue();
    Heap * heap = CreateHeap();
    FILE * output = fopen("saida.csv","w");
    FILE * file = fopen("C:\\Users\\Valdir Jr\\Documents\\GitHub\\PriorityQueueVsHeapQ\\numeros.txt","r");
    int numero;
    fprintf(output,"size,comparisons,algorithm\n");
  /*  while( fscanf(file, "%d\n", &numero ) != EOF )
    {

        //fprintf(output, "%d,%d,HeapQ\n", GetHeapSize(heap)-1,HEnqueue(heap,numero));
        fprintf(output, "%d,%d,PQueue\n", GetPQueueSize(pq),Enqueue(pq,0,numero));

    }*/


    printf("%d,%d,PQueue\n", GetPQueueSize(pq),Enqueue(pq,1,1));
    printf("%d,%d,PQueue\n", GetPQueueSize(pq),Enqueue(pq,2,4));
    printf("%d,%d,PQueue\n", GetPQueueSize(pq),Enqueue(pq,3,3));
    printf("%d\n",Dequeue(pq));
    printf("%d\n",Dequeue(pq));
    printf("%d\n",Dequeue(pq));
    CleanPQueue(pq);
    printf("%d\n",Enqueue(pq,100,50));
    printf("%d\n",Enqueue(pq, 20,30));
    printf("%d\n",Enqueue(pq, 0,40));
//0,1,2

    return 0;
}
