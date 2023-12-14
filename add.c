#include "monty.h"
void add(int *array)
{
    if (top < 1)
    {
        fprintf(stderr, "L%d: can't add, stack too short", line_number);
        exit(EXIT_FAILURE);
    }
    array[top - 1] = array[top] + array[top - 1];
    top--;
}