#include <stdio.h>
/**
 * main - print the alphabet in lowercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char ex;

	for (ex = 'a' ; ex < '{' ; ex++)
	{
		if (ex == 'q' || ex == 'e')
			ex++;
		putchar(ex);
	}
	putchar('\n');
	return (0);
}
