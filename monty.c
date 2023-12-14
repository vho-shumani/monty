#include "monty.h"
int top  = -1, line_number = 1;
int array[size];
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
    char buff[100], *opcode, *arg;
    int *ptr = array;
    int num;
    FILE *fp = NULL;

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
           opcode= strtok(buff, " \n");
            if (opcode != NULL)
            { 
                if (strcmp(opcode, "push") == 0)
                {
                    arg = strtok(NULL, " \n");
                    if (arg != NULL && _isdigit(arg) == 1)
                    {
                        num = atoi(arg);
                        push(num, ptr);
                    }
                    else
                    {
                        fprintf(stderr, "L%d: usage: push integer\n", line_number);
                        exit(EXIT_FAILURE);
                    }
                }
                else if (strcmp(opcode, "pall") == 0)
                    pall(ptr);
                else if (strcmp(opcode, "pint") == 0)
                    pint(ptr);
                else if (strcmp(opcode, "pop") == 0)
                    pop(ptr);
                else if (strcmp(opcode, "swap") == 0)
                    swap(ptr);
                else if (strcmp(opcode, "add") == 0)
                    add(ptr);
                else if (strcmp(opcode, "nop") == 0)
                    continue;
                else
                {
                    fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
                    exit(EXIT_FAILURE);
                }
            }
        }
        line_number++;
    }
    fclose(fp);
    return (0);
}