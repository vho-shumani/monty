#include "monty.h"
void pstr(int *stack)
{
    char str[100];
    int i = top, x = 0;

	if (top == -1)
	{
        printf("\n");
	}
    else
    {
        for (; i >= 0 && stack[i] != 0 && stack[i] >= 0 && stack[i] <= 127; i--, x++)
        {
            str[x] = (char)stack[i];
        }
        printf("%s\n", str);
    }
}