#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *array;
    int size;
} Stack;


Stack stackConstructor()
{
    Stack new_stack;

    new_stack.array = malloc(10 * sizeof(int));
    new_stack.size = 0;

    return new_stack;
}

void push(Stack * stack, int value)
{
    stack->array[stack->size++] = value;
}

void pop(Stack * stack)
{
    stack->size--;
}

int peek(Stack * stack)
{
    return stack->array[stack->size-1];
}

int main()
{
    Stack pilha = stackConstructor();

    push(&pilha, 1);
    push(&pilha, 2);

    printf("%d \n", peek(&pilha));
    pop(&pilha);

    printf("%d \n", peek(&pilha));
    pop(&pilha);
}
