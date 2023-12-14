#include "monty.h"
void push(stack_t **stack, int num)
{
    stack_t *new = (stack_t *)malloc(sizeof(stack_t));

    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n" );
        exit(EXIT_FAILURE);
    }
    new->n = num;
    if (*stack == NULL)
    {
        new->next = NULL;
        *stack = new;
    }
    else
    {
        new->next = *stack;
        new->prev = NULL;
        (*stack)->prev = new;
        *stack = new;
    }
    
}