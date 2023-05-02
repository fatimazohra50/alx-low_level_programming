#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
