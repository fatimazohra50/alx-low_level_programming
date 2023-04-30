#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: values number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list se;
	unsigned int li = 0;

	va_start(se, n);

	while (li < (n))
	{
		printf("%d", va_arg(se, int));

		if (li != (n - 1) &&  separator != NULL)
		{
			printf(", ");
		}
		li++;
	}
	printf("\n");
	va_end(se);
}
