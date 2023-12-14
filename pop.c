#include "monty.h"
void pop(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;

    if (*stack == NULL)
    {
        fprintf(stderr,"L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    if ((*stack)->next != NULL)
    {
        *stack = (*stack)->next;
        (*stack)->prev = NULL;
        free(tmp);
    }
    else
    {
        *stack = NULL;
        free(tmp);
    }
}