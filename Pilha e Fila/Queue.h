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

    new_queue.array = malloc();
    new_queue.size = 0;

    return new_queue;
}

void enqueue(Queue fila, int value)
{
    realloc(fila->array, fila->size +1);

    fila->array[fila->size] = value;

    fila->size++;
}

int dequeue(Queue fila)
{
    int aux = fila->array[0];

    for (int i = 0; i < fila->size; i++)
    {
        fila->array[i] = fila->array[i+1];
    }

    return aux;
}


#endif