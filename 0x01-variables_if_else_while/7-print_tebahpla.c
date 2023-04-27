#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int r = 'z';

	while (r >= 'a')
	{
		putchar(r);
		r--;
	}
	putchar('\n');
	return (0);
}
