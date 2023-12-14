#include "monty.h"
void swap(int *stack, unsigned int line_number)
{
    int i = stack[top];

    if (top < 1)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    stack[top] = stack[top-1];
    stack[top - 1] = i;
}