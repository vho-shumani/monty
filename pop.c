#include "monty.h"
void pop()
{
    stack_t *tmp = head;

    if (head == NULL)
    {
        fprintf(stderr,"L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    if (head->next != NULL)
    {
        head = head->next;
        head->prev = NULL;
        free(tmp);
    }
    else
    {
        head = NULL;
        free(tmp);
    }
}