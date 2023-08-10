#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to and string.
 * @n: Numbervofvbytes from s2 to concatenate.
 * Return: pointer to space in memory containing concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, l1, l2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (l1 = 0; s1[l1] != '\0'; l1++)
	;
	for (l2 = 0; s2[l2] != '\0'; l2++)
	;
	str = malloc(l1 + n + 1);
	if (str == NULL)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
str[i] = s1[i];
for (j = 0; j < n; j++)
{
	str[i] = s2[j];
	i++;
}
str[i] = '\0';
return (str);
}
