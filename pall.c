#include "monty.h"
void pall()
{
    stack_t *tmp = head;

    if (tmp != NULL)
    {
        while (tmp != NULL)
        {
            printf("%d\n", tmp->n);
            tmp = tmp->next; 
        }
    }
}