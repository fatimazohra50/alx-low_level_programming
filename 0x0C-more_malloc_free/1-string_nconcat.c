#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string
 * @s2: string
 * @n: number
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int i = 0, g = 0, a = 0, b = 0;

	while (s1 && s1[a])
		a++;
	while (s2 && s2[b])
		b++;
	if (n < b)
		z = malloc(sizeof(char) * (a + n + 1));
	else
		z = malloc(sizeof(char) * (a + b + 1));
	if (!z)
		return (NULL);
	while (i < a)
	{
		z[i] = s1[i];
		i++;
	}
	while (n < b && i < (a + n))
		z[i++] = s2[g++];
	while (n >= b && i < (a + b))
		z[i++] = s2[g++];
	z[i] = '\0';
	return (z);
}
