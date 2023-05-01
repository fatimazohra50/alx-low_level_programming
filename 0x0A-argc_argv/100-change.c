#include <stdio.h>
#include <stdib.h>
/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: number
 * @argv: pointer to an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int a, le = 0, mo = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1}

		for (a = 0, a < 5; a++)
		{
			if (mo >= cents[a])
			{
				le += mo / cents[a];
				mo = mo % cents[a];
				if (mo % cents[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d|n", le);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

