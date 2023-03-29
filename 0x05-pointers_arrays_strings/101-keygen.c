#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
=======
>>>>>>> 0c7729c3ade0d0162bb2fd7b8ed6b21c965a6ddd
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
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
