#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: index of the list where the new
 * node should be added. Index starts at 0
 * @n: data
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *e, *t = *head;

	e = malloc(sizeof(listint_t));
	if (!e || !head)
		return (NULL);
	e->n = n;
	e->next = NULL;

	if (d == 0)
	{
		e->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; t && i < d; i++)
	{
		if (i == d - 1)
		{
			e->next = t->next;
			t->next = e;
		}
		else
			t = t->next;
	}
	return (NULL);
}
