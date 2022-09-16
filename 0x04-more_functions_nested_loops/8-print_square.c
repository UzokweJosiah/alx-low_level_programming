#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square,followed by a new line;
 * you can only use _putchar function to print
 * @size: size of te square
 * if size is 0 or less, thhe function should print only a new line
 * use the character # to print the square
 * Return: 0
 */

void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{	
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

}
