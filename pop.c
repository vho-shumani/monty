#include "monty.h"
void pop(int *stack, unsigned int line_number)
{
    if (top == -1)
    {
        fprintf(stderr, "L%d: can't pop an empty stack", line_number);
        exit(EXIT_FAILURE);
    }
    stack[top] = stack[top + 1];
    top--;
}