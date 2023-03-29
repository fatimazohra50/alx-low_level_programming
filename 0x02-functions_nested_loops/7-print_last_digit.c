#includ "main.h"
/**
 * print_last_digit - print last digit of a number .
 * @n: takes number input
 * return: lastdigit
 */
int print_last_digit(int n)
{
	int s;
	
	if (n < 0)
	{
		s = (-1) * (n % 10);
	}
	else
		s = n % 10;
	_putchar(s + '0');
	return (s);
}
