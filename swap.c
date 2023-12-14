#include "monty.h"
void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;
    int i = (*stack)->n;

    if (stack_t_len(tmp) < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    tmp = tmp->next;
    (*stack)->n = tmp->n;
    tmp->n = i;
}