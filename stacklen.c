#include "monty.h"
int stack_t_len(stack_t *h)
{
	stack_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}