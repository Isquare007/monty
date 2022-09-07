#include "monty.h"

/**
  * _push - to push data to linked list
  * @stack: the linked lists for monty stack
  * @line_number: number of line opcode occurs
  */

void _push(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *newnode;
	(void)line_number;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newnode->n = var_global.push_arg;
	newnode->next = *stack;
	newnode->prev = NULL;
	if (*stack != NULL)
		(*stack)->prev = newnode;
	*stack = newnode;
}
