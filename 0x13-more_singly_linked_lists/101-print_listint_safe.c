#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in alinked list
 * @list: the old list
 * @size of the new list
 * @new: new list
 * Return: the number of nodes in the list
 */
const listint_t **_r(const listint_t **lust, size_t size, const listint_t *new)
{
	const listint_t **ne;
	size_t i;

	ne = malloc(size * sizeof(listint_t));
	if (ne == NULL)
	{
		free(lust);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		ne[i] = lust[i];
	ne[i] = new;
	free(lust);
	return (ne);
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, m = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < m; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (m);
			}
		}
		m++;
		list = _r(list, m, head);
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (m);
}
