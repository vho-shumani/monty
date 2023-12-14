#include "monty.h"
void push(int *stack, int num)
{
    if (top == size - 1)
    {
        fprintf(stderr, "overflow\n" );
        exit(EXIT_FAILURE);
    }
    top++;
    stack[top] = num;    
}