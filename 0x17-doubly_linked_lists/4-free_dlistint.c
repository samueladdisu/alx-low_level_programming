#include "lists.h"
/**
 * free_dlistint - free doubly linked list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur;

	while (head)
	{
		cur = head->next;
		free(head);
		head = cur;
	}
}
