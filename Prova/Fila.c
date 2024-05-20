#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int *array;
    int size;
} Queue;


Queue queueConstructor()
{
    Queue new_queue;

    new_queue.array = malloc(10 * sizeof(int));
    new_queue.size = 0;

    return new_queue;
}

void enqueue(Queue * fila, int value)
{
    fila->array[fila->size] = value;

    fila->size++;
}

int dequeue(Queue * fila)
{
    int aux = fila->array[0];

    for (int i = 0; i < fila->size; i++)
    {
        fila->array[i] = fila->array[i+1];
    }

    fila->size --;

    return aux;
}

int main()
{
    Queue fila = queueConstructor();

    enqueue(&fila, 1);
    enqueue(&fila, 2);
    enqueue(&fila, 3);
    enqueue(&fila, 4);

    printf("%d\n", dequeue(&fila));
    printf("%d\n", dequeue(&fila));
    printf("%d\n", dequeue(&fila));
    printf("%d\n", dequeue(&fila));

}
