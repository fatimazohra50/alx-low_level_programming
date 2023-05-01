#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1= _atoi(argv[1]);
		num2= _atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
	        printf("Error\n");
		return (1);
	}
	return (0);
}
