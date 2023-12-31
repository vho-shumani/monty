#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define size 1000
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
int _isdigit(char *c);
extern int top;
void sub(int *stack, unsigned int line_number);
void push(int *stack, int line_number);
void pall(int *stack);
void pint(int *stack, unsigned int line_number);
void pchar(int *stack, unsigned int line_number);
void pop(int *stack, unsigned int line_number);
void swap(int *stack, unsigned int line_number);
void add(int *stack, unsigned int line_number);
void divi(int *stack, unsigned int line_number);
void mul(int *stack, unsigned int line_number);
void mod(int *stack, unsigned int line_number);
void pstr(int *stack);
void rotl(int *stack);
void rotr(int *stack);

#endif