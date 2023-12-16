#include "monty.h"
#define size 1000
int top = -1;
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
    int array[size];
    int *ptr = array;
    int num, line_number = 1;

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
						push(ptr, num);
					}
					else
					{
						fprintf(stderr, "L%d: usage: push integer\n", line_number);
						exit(EXIT_FAILURE);
					}
				}
				else if (strcmp(token, "pall") == 0)
					pall(ptr);
				else if (strcmp(token, "pint") == 0)
					pint(ptr, line_number);
				else if (strcmp(token, "pop") == 0)
					pop(ptr, line_number);
				else if (strcmp(token, "swap") == 0)
					swap(ptr, line_number);
				else if (strcmp(token, "add") == 0)
					add(ptr, line_number);
				else if (strcmp(token, "nop") == 0)
					continue;
                else if (strcmp(token, "sub") == 0)
                    sub(ptr, line_number);
                else if (strcmp(token, "div") == 0)
                    divi(ptr, line_number);
                else if (strcmp(token, "mul") == 0)
                    mul(ptr, line_number);
                else if (strcmp(token, "mod") == 0)
                    mod(ptr, line_number);
                else if (strcmp(token, "pchar") == 0)
                    pchar(ptr, line_number);
                else if (strcmp(token, "pstr") == 0)
                    pstr(ptr);
				else if (strcmp(token, "rotl") == 0)
                    rotl(ptr);
                else if (token[0] == '#')
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
