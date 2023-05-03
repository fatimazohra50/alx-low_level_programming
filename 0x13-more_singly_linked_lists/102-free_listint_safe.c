#include "lists.h"
/**
 * free_listint_safe - prints a listint_t linked list.
 * @h: pointe
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			f(*h);
			*h = t;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
