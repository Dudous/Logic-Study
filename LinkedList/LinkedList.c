#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node{
    int value;
    struct Node *next;
} Node;

typedef struct  Queue
{
    int size;
    Node * head;
} Queue;


void displayLL(Node *p)
{
    printf("Mostrando a lista:\n"); 
    if(p)
    {
        do
        {
            printf(" %d", p->ano);
            p=p->next;
        }
        while(p);
    }
    else
        printf("Lista vazia.");
}


// Node * dequeue(Node * p)
// {
//     if(p)
//     {
        
//     }
//     else
//         printf("Lista vazia.");
// }


void enqueue(Queue * fila, int value)
{
    Node * new_node = malloc(sizeof(Node));
    new_node->next = NULL;
    new_node->value = value;

    fila->size++;

    if(!fila->head)
    {
        fila->head = new_node;
        return;
    }

    Node aux = fila->head;

    while (aux.next != NULL)
    {
        aux = aux->next;
    }

    aux->next = new_node;

}

int main(void)
{
    Queue fila;

    enqueue(fila, 10);
    enqueue(fila, 11);
    enqueue(fila, 12);

    displayLL(fila);
}


//TUDO ERRADO