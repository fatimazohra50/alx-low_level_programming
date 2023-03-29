#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main -generates random passwords for 101-ctackme
 * Return::zero
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
	}
	putchar(2772 - sum);
	return (0);
}
