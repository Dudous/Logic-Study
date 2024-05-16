#ifndef QUEUE_H
#define QUEUE_H

typedef struct 
{
    int * array;
    int size;
} Queue;


Queue queueConstructor()
{
    Queue new_queue;

    new_queue.array = malloc(sizeof(int));
    new_queue.size = 0;

    return new_queue;
}

void enqueue(Queue * fila, int value)
{
    realloc(fila->array, fila->size +1 * sizeof(int));

    fila->array[fila->size++] = value;
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

void removeQUeue(Queue * fila)
{
    fila->array[fila->size - 1] = NULL;

    fila->size--;
}

#endif