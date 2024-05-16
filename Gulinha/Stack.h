#include <stdlib.h>
#ifndef STACK_H
#define STACK_H

typedef struct
{
    int *array;
    int size;
} Stack;

Stack stackConstructor()
{
    Stack new_stack;

    new_stack.array = malloc(sizeof(int));
    new_stack.size = 0;

    return new_stack;
}

void push(Stack * stack, int value)
{
    stack->array[stack->size] = value;

    realloc(stack->array, (++stack->size) * sizeof(int));
}

void pop(Stack * stack)
{
    stack->size--;
}

int peek(Stack * stack)
{
    return stack->array[stack->size-1];
}

#endif 