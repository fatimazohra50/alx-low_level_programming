#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, l = 0, m = atoi(argv[1]);
		int c[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= c[i])
			{
				l += m / c[i];
				m = m % c[i];
				if (m % c[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", l);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
	return (0);
}
