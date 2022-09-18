#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - function prints number
 *
 * Return: void
 */

void print_most_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
