#include "lists.h"
/**
 * dlistint_len - get length of dlist
 * @h: head pointer
 * Return: number of Nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 1;
	dlistint_t *cur;

	if (!h)
		return (0);
	cur = h->next;
	while (cur)
	{
		len++;
		cur = cur->next;
	}
	return (len);
}
