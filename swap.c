#include "monty.h"
void swap()
{
    stack_t *tmp = head;
    int i = head->n;

    if (stack_t_len(head) < 2)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    tmp = tmp->next;
    head->n = tmp->n;
    tmp->n = i;
}