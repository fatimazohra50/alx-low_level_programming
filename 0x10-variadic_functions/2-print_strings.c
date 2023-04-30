#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * @...: vales string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list se;
	unsigned int li = 0;

	va_start(se, n);

	while (li < (n))
	{
		printf("%s", va_arg(se, char *));

		if (separator != NULL && li != (n - 1))
		{
			printf("%s", separator);
		}
		li++;
	}
	printf("\n");
	va_end(se);
}
