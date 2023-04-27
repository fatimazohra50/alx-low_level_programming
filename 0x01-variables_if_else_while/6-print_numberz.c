#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *        followed by a new line.
 * Return: 0
 */
int main(void)
{
	char s;

	s = '0';
	while (s <= '9')
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
