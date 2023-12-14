#include "monty.h"
void add()
{
	stack_t *tmp = head;
	if (stack_t_len(head) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	head = head->next;
	head->n = head->n + tmp->n;
	head->prev = NULL;
	free(tmp);
}
