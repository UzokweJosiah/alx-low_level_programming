#include "main.h"
#include <stdio>

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Description: A function that prints a string, followed by a new line
 * Return; null
 */

void _puts(char *str)
{
	int i;

	for (i = o; str[i] != '\0'; I++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}