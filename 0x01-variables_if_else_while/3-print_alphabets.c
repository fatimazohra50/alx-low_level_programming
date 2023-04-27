#include <stdio.h>
/**
 * main - Print the alphabet in lowercase,
 *        then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char low, upp;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upp = 'A'; upp <= 'Z'; upp++)
		putchar(upp);
	putchar('\n');
	return (0);
}
