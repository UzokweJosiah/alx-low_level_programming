#include "main.h"

/**
 * print_rev - prints astring in reverse, followed by a new line
 * @s: string to be pointed
 * Dexcription: function that prints a string, in reverse
 * Return: null
 */

void print_rev(char *s)
{
	int i, j, temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	temp = i;

	for (j = temp - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
