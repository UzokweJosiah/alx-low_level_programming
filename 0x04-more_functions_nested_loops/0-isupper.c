#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: its mine entry
 * Description: the fuction checks for uppercase character,
 * returns 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	int alphabet;
	int return_value = 0;

	for (alphabet >= 'A'; alphabet <= 'Z'; alphabet++)
	{
		if (c == alphabet)
			return_value = 1;
	}
		return (return_value);
}
