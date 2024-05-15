#include <stdio.h>
#include "Stack.h"
// #include "Queue.h"

int main()
{
    Stack pilha = stackConstructor();

    push(&pilha, 1);
    push(&pilha, 2);
    push(&pilha, 3);
    push(&pilha, 4);
    push(&pilha, 4);

    teste(&pilha);
    printf("\n");

    printf("%d \n", peek(&pilha));
    pop(&pilha);

    printf("%d \n", peek(&pilha));
    pop(&pilha);

    printf("%d \n", peek(&pilha));
    pop(&pilha);

    printf("%d \n", peek(&pilha));
    pop(&pilha);

    printf("%d \n", peek(&pilha));
    pop(&pilha);


    // printf("--- Fila ---\n\n");

    // Queue fila = queueConstructor();

    // enqueue(&fila, 1);
    // enqueue(&fila, 2);
    // enqueue(&fila, 3);
    // enqueue(&fila, 4);

    // printf("%d\n", dequeue(&fila));
    // printf("%d\n", dequeue(&fila));
    // printf("%d\n", dequeue(&fila));
    // printf("%d\n", dequeue(&fila));


}
