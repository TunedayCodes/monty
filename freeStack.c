#include "monty.h"

/**
* free_stack - func that frees a doubly linked list
* @head: head pointer to the stack
*
* Return: 0
*/
void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* f_stack - func that prints the top
* @head: head of stack
* @counter: line count
*
* Return: 0
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
