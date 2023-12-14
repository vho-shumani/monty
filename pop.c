#include "monty.h"
void pop()
{
    if (top == -1)
    {
        fprintf(stderr,"L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    top--;
}