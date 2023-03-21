#include "main.h"
/**
 * main - Entry point
 *Description: prints _putcharus using putchar prototype
 * Return: Always 0(success)
*/
int main(void)
{
	char str[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
		_putchar(str[a]);
	_putchar('\n');
	return (0);
}
