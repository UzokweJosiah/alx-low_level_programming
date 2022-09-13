#include <stdio.h>
#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase.
 *
 * Description:'This function prints 10 times the lowercase
 * of alphabet followed by a newline'
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;
	char alphabet;

	i = 0;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
	

}

