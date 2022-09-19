#include "main.h"
#include <stdio.h>

/**
 * swap_int -swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 *
 * Description: Afunction that swaps the values of two integers
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
