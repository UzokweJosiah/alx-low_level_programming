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

	num1 = n % 10;

	if (num1 < 0)
		num1 = -num1;
	_putchar(num1 + '0');

	return (num1);

}
