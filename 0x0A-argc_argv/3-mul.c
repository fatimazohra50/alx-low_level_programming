#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int num1 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
