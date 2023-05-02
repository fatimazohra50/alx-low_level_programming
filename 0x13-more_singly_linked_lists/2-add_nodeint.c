#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer
 * @n: data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ew;

	ew = malloc(sizeof(listint_t));
	if (!ew)
		return (NULL);

	ew->n = n;
	ew->next = *head;
	*head = ew;

	return (ew);
}
