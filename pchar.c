#include "monty.h"
void pchar(int *stack, unsigned int line_number)
{
    char c = (char)stack[top]; 
	if (top == -1)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
    if (stack[top] < 0 || stack[top] > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number );
        exit(EXIT_FAILURE);
    }
    printf("%c\n", c);
}