#include "monty.h"
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	if (stack_t_len(tmp) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	(*stack)->n = (*stack)->n + tmp->n;
	(*stack)->prev = NULL;
	free(tmp);
}
