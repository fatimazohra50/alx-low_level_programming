 #include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer the string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	char v = 0;

	if (*s > '\0')
	{
		v = v + _strlen_recursion(s + 1) + 1;
	}
	return (v);
}
