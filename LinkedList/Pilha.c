#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void push(LinkedList * list, int value)
{
    addlist(list, value);
}

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
    LinkedList * list = LinkedListConstructor();

    push(list, 1);
    push(list, 2);
    push(list, 3);
    push(list, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("\nPop %d = %d", i, removeList(list, list->size -1));
    }

}