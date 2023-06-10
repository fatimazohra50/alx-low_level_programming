#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number
 * @argv: pointer to an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum1 = 0, sum2 = 0, sum;

	if (argc == 3)
	{
		sum1 = atoi(argv[1]);
		sum2 = atoi(argv[2]);
		sum = sum1 * sum2;
		printf("%d\n", sum);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
