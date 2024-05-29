#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// void push(LinkedList * list, int value)
// {
//     add(list, value);
// }

// int pop(LinkedList * list)
// {
//     return removeList(list, list->size -1);
// }

// int peek(LinkedList * list)
// {
//     return getList(list, list->size -1);
// }


int main()
{
    LinkedList list = LinkedListConstructor();

    addlist(&list, 1);
    addlist(&list, 2);
    addlist(&list, 3);
    addlist(&list, 4);

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Pop %d = %d", i, pop(list));
    // }

}