#include "main.h"
/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int line, a;

	for (line = 0; line <= 9; line++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
