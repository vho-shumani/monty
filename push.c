#include "monty.h"
void push()
{
    stack_t *new = (stack_t *)malloc(sizeof(stack_t));

    if (new == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n" );
        exit(EXIT_FAILURE);
    }
    new->n = num;
    if (head == NULL)
    {
        new->next = NULL;
        head = new;
    }
    else
    {
        new->next = head;
        new->prev = NULL;
        head->prev = new;
        head = new;
    }
    
}