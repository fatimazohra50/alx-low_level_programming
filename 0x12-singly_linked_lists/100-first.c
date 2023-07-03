#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
void _con(void) __attribute__((constructor));
/**
 * _con - executes before main()
 * Return: void
 */
void _con(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
