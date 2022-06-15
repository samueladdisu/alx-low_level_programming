#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head pointer
 * @index: index of node to be deleted
 * Return: 1 if succeed else  -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);
	cur = *head;
	while (cur)
	{
		if (i == index)
		{
			if (index == 0)
			{
				*head = cur->next;
			}
			if ((cur->prev != NULL) && (cur->next != NULL))
			{
				(cur->prev)->next = cur->next;
				(cur->next)->prev = cur->prev;
			}
			else if (cur->prev != NULL && cur->next == NULL)
			{
				(cur->prev)->next = NULL;
			}
			else if (cur->next != NULL && cur->prev == NULL)
			{
				(cur->next)->prev = NULL;
			}
			free(cur);
			return (1);
		}
		i++;
		cur = cur->next;
	}
	return (-1);
}
