#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *co;
	int i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = c = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	co = malloc(sizeof(char) * (i + c + 1));

	if (co == NULL)
		return (NULL);
	i = c = 0;
	while (s1[i] != '\0')
	{
		co[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
	{
		co[i] = s2[c];
		i++, c++;
	}
	co[i] = '\0';
	return (co);
}
