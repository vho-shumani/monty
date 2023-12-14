#include "monty.h"
int _isdigit(char *c)
{
	for (; *c != '\0'; c++)
	{
		int i = (int)*c;
		if (i < 48 || i > 57)
			return 0;
	}
	return 1;
}
int main(int argc, char *argv[])
{
	char buff[100], *token, *arg;
	FILE *fp;
    stack_t *stack;
    int num, line_number;

	if (argc != 2)
	{
		fprintf(stderr,"USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stdout,"Error: Can't open file %s\n", argv[1]);
	}
	while (!feof(fp))
	{
		if (fgets(buff, 100, fp) != NULL)
		{
			token = strtok(buff, " \n\t");
			if (token != NULL)
			{
				if (strcmp(token, "push") == 0)
				{
					arg = strtok(NULL, " \n\t");
					if (arg != NULL && _isdigit(arg) == 1)
					{
						num = atoi(arg);
						push(&stack, num);
					}
					else
					{
						fprintf(stderr, "L%d: usage: push integer\n", line_number);
						exit(EXIT_FAILURE);
					}
				}
				else if (strcmp(token, "pall") == 0)
					pall(&stack);
				else if (strcmp(token, "pint") == 0)
					pint(&stack, line_number);
				else if (strcmp(token, "pop") == 0)
					pop(&stack, line_number);
				else if (strcmp(token, "swap") == 0)
					swap(&stack, line_number);
				else if (strcmp(token, "add") == 0)
					add(&stack, line_number);
				else if (strcmp(token, "nop") == 0)
					continue;
				else
				{
					fprintf(stderr, "L%d: unknown instruction %s\n", line_number, token);
					exit(EXIT_FAILURE);
				}
			}
		}
		line_number++;
	}
	fclose(fp);
	return (0);
}
