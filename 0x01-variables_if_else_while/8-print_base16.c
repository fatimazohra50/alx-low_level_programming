#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase,
 *        followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c, n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
