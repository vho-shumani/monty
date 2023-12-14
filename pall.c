#include "monty.h"
void pall(int *stack)
{
    int i = top;

    if (top != -1)
    {
        while (i >= 0)
        {
            printf("%d\n", stack[i]);
            i--;
        }
    }
}