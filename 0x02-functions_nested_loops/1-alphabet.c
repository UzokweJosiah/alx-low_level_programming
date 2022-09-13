#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabet in lowercase
 *
 * Description:'A function that prints alphabet in lowercase
 * followed ny newline'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

}
