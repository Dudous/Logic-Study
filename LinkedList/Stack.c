#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void push(LinkedList * list, int value)
{
    addlist(list, value);
}

int pop(LinkedList * list)
{
    return removeList(list, list->size -1);
}

int peek(LinkedList * list)
{
    return getList(list, list->size -1);
}


int main()
{
    LinkedList * list = LinkedListConstructor();

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);


    printf("\nGET %d",peek(stack));

    for (int i = 0; i < 4; i++)
    {
        printf("\nPop %d",pop(stack));
    }

}