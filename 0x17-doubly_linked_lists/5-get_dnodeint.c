#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: head pointer
 * @index: index of node required
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	cur = head;
	for (i = 0; (i < index) && cur; i++)
	{
		cur = cur->next;
	}
	return (cur);
}
