#include <stdio.h>
#include "main.h"

/**
 * print_line - main entry
 *
 * @n: input arg
 * Description: the function draw a new line in the terminal
 *
 * Return: null
 */

void print_line(int n)
{
	int i;
	
	for (i = 0; i <= n;  i++)
	{
		_putchar('_');

		if (i <= 0)
		{
			_putchar('\n');
		}

	}
	_putchar('\n');
}
