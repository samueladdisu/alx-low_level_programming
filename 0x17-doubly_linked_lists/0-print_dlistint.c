#include "lists.h"
/**
 * print_dlistint - print doubly linked list
 * @h: head pointer
 * Return: Number of Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 1;
	dlistint_t *cur;

	if (!h)
		return (0);
	cur = h->next;
	printf("%d\n", h->n);
	while (cur)
	{
		nodes++;
		printf("%d\n", cur->n);
		cur = cur->next;
	}
	return (nodes);
}
