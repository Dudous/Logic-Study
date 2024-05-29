#include <stdlib.h>
#include <stdio.h>
#ifndef LinkedList_H
#define LinkedList_H

typedef struct NodeList
{
    int value;
    struct NodeList *next;
}NodeList;

typedef struct LinkedList
{
    NodeList *head;
    int size;
}LinkedList;


LinkedList * LinkedListConstructor()
{
    LinkedList * new_linked = malloc(sizeof(LinkedList));

    new_linked->head = NULL;
    new_linked->size = 0;

    return new_linked;
}


void addlist(LinkedList *list, int value)
{
    list->size++;
    NodeList *node = malloc(sizeof(NodeList));
    node->value = value;
    node->next = NULL;

    printf("\n%d", node->value);

    if(!list->head)
    {
        list->head = node;
        return;
    }

    NodeList* iterator = list->head;

    while(iterator->next == NULL)
    {
        printf("\nteste");
        iterator = iterator->next;
    }

    iterator->next = node;

    return;
}

int removeList(LinkedList * list, int index)
{
    if(index >= list->size)
        return 0;
    
    list->size--;

    NodeList * iterator = list->head;

    for (int i = 1; i < index; i++)
    {
        printf("\n%d", iterator->value);
        iterator = iterator->next;
    }
    
    NodeList * aux = iterator->next;

    iterator->next = aux->next;

    return aux->value;
}

// int getList(LinkedList list, int index)
// {
//     if(index >= size)
//         return NULL;
    
//     NodeList iterator = list.head;

//     for (int i = 1; i <= index; i++)
//     {
//         iterator = iterator.next;
//     }

//     return iterator.value;
// }

#endif // !LinkedList