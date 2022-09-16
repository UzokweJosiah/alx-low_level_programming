#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1  is c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int a;

	for ( a = 0; a <= 9; a++)
	{
		if (c == a){
			return (1)
		}
	}
	return (0);

}
