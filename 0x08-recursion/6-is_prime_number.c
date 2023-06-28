#include "main.h"
#include <stdio.h>
int su_them_all(int n, int s);
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 *               otherwise return 0.
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (su_them_all(n, 1));
}
/**
 * su_them_all - check all number n if they can divide it
 * @n: int
 * @s: int
 * Return: int
 */
int su_them_all(int n, int s)
{
	if (n < 0)
	{
		n = n * -1;
	}
	if (s * s == n)
	{
		return (0);
	}
	if (s * s < n)
	{
		(su_them_all(n, s + 1));
	}
	else
	{
		return 1;
	}
}
