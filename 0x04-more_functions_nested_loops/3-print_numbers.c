#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function prints numbers from 0 to 9
 *
 * Return: null
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
