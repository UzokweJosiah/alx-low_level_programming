#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square
 * @size: indicates the size of te square
 *
 * Description: the function prints a square, followed by a new line
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{	
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

	return 0;

}
