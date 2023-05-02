#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);
	if (m == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		m[a] = malloc(sizeof(int) * width);
		if (m[a] == NULL)
		{
			for (; a >= 0; a++)
				free(m[a]);
			free(m);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			m[a][b] = 0;
	}
	return (m);
}
