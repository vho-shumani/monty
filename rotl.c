#include "monty.h"
void rotl(int *stack)
{
    int i = stack[top], x;

    for (x = top; x > 0; x--)
    {
        stack[x] = stack[x - 1];
    }
    stack[0] = i;
}