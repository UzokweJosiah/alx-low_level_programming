#include <stdio.h>
#include "main.h"
/**
 * print_sign - Main entry
 *
 * Return: 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	int num1 = 0;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (num1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (num1);

}
