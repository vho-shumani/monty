#include "monty.h"
void pall(int *array)
{
    int i;
    if (top == -1)
    {
        fprintf(stderr, "underflow");
    }
    else
    {
        i = top;
        while (i >= 0)
        {
            printf("%d\n", array[i]);
            i--;
        }
    }
}