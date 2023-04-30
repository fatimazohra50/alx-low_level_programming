#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the variable number.
 * @...: the variable number.
 * Return: if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list co;
	int sun = 0, i = n;

	if (n == 0)
	return (0);
	va_start(co, n);

	while (i--)
		sun = sun + va_arg(co, int);
	va_end(co);
	return (sun);
}
