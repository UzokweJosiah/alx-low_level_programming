#include "main.h"

/**
 * faactorial - a function that return the factorial of a number
 * @n: the number to find the factorial
 *
 * Return: -1 if n is less than 0, else factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	else if (n == 0)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
