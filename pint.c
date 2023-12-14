#include "monty.h"
void pint(int *stack, unsigned int line_number)
{
    if (top == -1)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", stack[top]);
}