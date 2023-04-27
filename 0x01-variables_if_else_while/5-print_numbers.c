#include <stdio.h>
/**
 * main - print all single digit numbers of base 10 starting from 0,
 *        followed by a new line.
 * Return: 0
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
		printf("%d", s);
	printf("\n");
	return (0);
}
