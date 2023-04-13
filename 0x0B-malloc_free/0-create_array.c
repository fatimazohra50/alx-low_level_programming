#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create an array of size size assign char,
 * @size: size of the array
 * @c: char to assign
 * Descriotion: creat array of size and assign char c
 * Return : pointer to the array, or NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
	{
		return (0);
	}

	while (size--)
		n[size] = c;
	return (n);
}
