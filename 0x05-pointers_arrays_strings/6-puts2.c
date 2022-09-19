#include "main.h"

/**
 * puts2 - prints one out of 2 of string
 * followed by a new ine
 * @str; string to print the chars from
 * Description: The function prints every other character of string
 * starting with the first character
 * Return: null
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
