#include "lists.h"
/**
 * add_dnodeint_end - add node to end of list
 * @head: head pointer
 * @n: new node data
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *cur;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (!head || !(*head))
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
		return (newNode);
	}
	cur = (*head)->next;
	if (!cur)
	{
		newNode->prev = *head;
		newNode->next = NULL;
		(*head)->next = newNode;
		return (newNode);
	}
	while (cur->next)
		cur = cur->next;
	newNode->prev = cur;
	newNode->next = NULL;
	cur->next = newNode;
	return (newNode);
}
