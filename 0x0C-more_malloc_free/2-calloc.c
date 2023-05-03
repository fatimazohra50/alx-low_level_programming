#include <stdlib.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(sizeof(int) * nmemb);
	if (a == NULL)
		return (NULL);
	_memset(a, 0, sizeof(int) * size);
	return (a);
}
