#include "main.h"
/**
 * _pow_recursion - retums the value of x raised to the power of y
 * @x: value to reise
 * @y: power
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < -1)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
