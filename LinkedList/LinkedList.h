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


LinkedList LinkedListConstructor()
{
    LinkedList new_linked;

    new_linked.head = NULL;
    new_linked.size = 0;
    return new_linked;
}


void addlist(LinkedList *list, int value)
{
    list->size++;
    NodeList *node;
    node->value = value;

    if(!list->head)
    {
        list->head = node;
        return;
    }

    NodeList* iterator = list->head;

    while(!iterator->next)
    {
        iterator = iterator->next;
    }

    iterator->next = node;

    return;
}

// int removeList(LinkedList list, int index)
// {
//     if(index >= size)
//         return NULL;
    
//     size--;

//     NodeList iterator = list.head;

//     for (int i = 1; i < index; i++)
//     {
//         iterator = iterator.next;
//     }
    
//     NodeList aux = iterator;
//     aux = iterator.next;

//     iterator.next = aux.next;

//     return aux.value;
// }

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