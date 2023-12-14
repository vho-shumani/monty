#include "monty.h"
void divi(int *stack, unsigned int line_number)
{
	if (top < 1)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
    if (stack[top] == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number );
        exit(EXIT_FAILURE);
    }
	top--;
	stack[top] = stack[top] / stack[top + 1];
}