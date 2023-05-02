#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - convert the params passed to the program to string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: ...
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (ch == 0 || ch < ac; ch++)
	{
		for (i = 0; av[ch][i]; i++)
			k++;
	}
	k += ac;
	s = malloc(sizeof(char) * k + 1);
	if (s == NULL)
		return (NULL);
	for (ch = 0; ch < ac; ch++)
	{
		for (i = 0; av[ch][i]; i++)
		{
			s[j] = av[ch][i];
			j++;
		}
		if (s[j] == '\0')
		{
			s[j++] = '\n';
		}
	}
	return (s);
}
