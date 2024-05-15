#include <stdlib.h>
#include <stdio.h>
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

    new_stack.array = NULL;
    new_stack.size = 0;

    return new_stack;
}

void push(Stack * stack, int value)
{
    if(!stack->array)
    {
        stack->array[stack->size] = value;
        stack->size++;
        return;
    }
    realloc(stack->array, (++stack->size) * sizeof(int));

    stack->array[stack->size -1] = value;
}

void pop(Stack * stack)
{
    --stack->size;
}

int peek(Stack * stack)
{
    return stack->array[stack->size -1];
}

void teste(Stack * stack){
    for(int i = 0; i < 5; i++){
        printf("%d\n", stack->array[i]);
    }
}

#endif 