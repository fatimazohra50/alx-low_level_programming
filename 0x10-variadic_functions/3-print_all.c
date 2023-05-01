#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list se;
	int i = 0;
	char *c, *j = "";

	va_start(se, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", j, va_arg(se, int));
					break;
				case 'i':
					printf("%s%d", j, va_arg(se, int));
					break;
				case 'f':
					printf("%s%f", j, va_arg(se, double));
					break;
				case 's':
					c = va_arg(se, char *);
					if (!c)
						c = "(nil)";
					printf("%s%s", j, c);
					break;
				default:
					i++;
					continue;
			}
			j = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(se);
}

