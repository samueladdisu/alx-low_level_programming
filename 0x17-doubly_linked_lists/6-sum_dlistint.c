#include "lists.h"
/**
 * sum_dlistint - get sum of all data of dlist
 * @head: head pointer
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur;
	int sum = 0;

	cur = head;
	while (cur)
	{
		sum = sum + cur->n;
		cur = cur->next;
	}
	return (sum);
}
