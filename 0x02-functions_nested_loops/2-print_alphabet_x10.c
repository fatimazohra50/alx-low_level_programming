#include "main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int b, a;

	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
