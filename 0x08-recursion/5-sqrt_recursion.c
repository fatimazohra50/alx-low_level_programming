#include "main.h"
/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */
int sum_them_all(int n, int s);
int _sqrt_recursion(int n)
{
	return (sum_them_all(n, 1));
}
/**
 * sum_them_all - find square root
 * @n: int
 * @s: square root
 * Return: int
 */
int sum_them_all(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	if (s * s < n)
	{
		return (sum_them_all(n, s + 1));
	}
	else
		return (-1);
}
