#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Main Entry
 * Return: 1 true 0 false
 * @c: being an automatic variable
 */

int _isalpha(int c)
{
	int alphabet;
	int return_value = 0;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (c == alphabet)
			return_value = 1;
	}

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
			if (c == alphabet)
				return_value = 1;
	}

	return (return_value);
}
