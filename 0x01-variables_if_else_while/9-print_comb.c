#include <stdio.h>
/**
 * main - print all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
		return (0);
}
