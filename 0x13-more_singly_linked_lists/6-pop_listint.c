#include "lists.h"
/**
 * pop_listint - pops head nod of list
 * @head: address of pointer to first node
 * Return: Value of popped node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
