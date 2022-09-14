#include <stdio.h>
#include "main.h"

/**
 * _islower - Main Entry
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int alphabet;
	int retval = 0;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (c == alphabet)
			retval = 1;
	}

	return (retval);

}
