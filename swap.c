#include "monty.h"
void swap(int *array)
{
    int i = array[top];
    if (top < 1)
    {
        fprintf(stderr, "L%d: can't swap, stack too short", line_number);
        exit(EXIT_FAILURE);
    }
    array[top] = array[top - 1];
    array[top - 1] = i; 
}