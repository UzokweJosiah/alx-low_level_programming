#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Main Entry
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int num1;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);

}
