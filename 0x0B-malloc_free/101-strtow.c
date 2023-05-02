#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * wrdcnt - counts the number of words in a string
 * @s: string
 * Return: words
 */
int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}
/**
 * **strtow -  splits a string into words.
 * @str: string
 * Return: array
 */
char **strtow(char *str)
{
	int i, q, k, w, n = 0, c = 0;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	a = (char **)malloc(n * sizeof(char *));
	if (a == NULL)
		return (NULL);
	a[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0  || str[i - 1] == ' '))
		{
			for (q = 1; str[i + q] != ' ' && str[i + q]; q++)
				;
			q++;
			a[c] = (char *)malloc(q * sizeof(char));
			q--;
			if (a[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(a[k]);
				free(a[n - 1]);
				free(a);
				return (NULL);
			}
			for (w = 0; w < q; w++)
				a[c][w] = str[i + w];
			a[c][w] = '\0';
			c++;
			i += q;
		}
		else
			i++;
	}
	return (a);
}

