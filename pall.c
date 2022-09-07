#include "monty.h"

/**
  * _pall - prints all data in stack
  * @stack: pointer to linked list stack
  * @line_number: number of line opcode occurs on
  */
void _pall(stack_t **stack, __attribute__ ((unused))unsigned int line_number)
{
	stack_t *top;

	top = *stack;
	while (top != NULL)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
