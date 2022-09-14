#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Main Entry
 *
 * @c: the character to be check
 *
 * Retun: 1 if c is letter, else 0
 */

int _isalpha(int c)
{
	int alphabet;
	int return_value = 0;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (c == alphabet)
		{
			return_value = 1
		}

		for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
		{
			if (c == alphabet)
			{
				return_value = 1;
			}
		return (return_value);
		}
	}

}
