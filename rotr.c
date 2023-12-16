#include "monty.h"
void rotr(int *stack)
{
    int i = stack[0], x;

    for (x = 0; x < top; x++)
    {
        stack[x] = stack[x + 1];
    }
    stack[top] = i;
}