#include "monty.h"
void add(int *stack, unsigned int line_number)
{
	if (top < 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top--;
	stack[top] = stack[top] + stack[top + 1];
}
