#include "monty.h"
void push(int i, int *array)
{
    if (top == size - 1)
    {
        fprintf(stderr,"Stack overflow");
    }
    else
    {
        top++;
        array[top] = i;
    }
}