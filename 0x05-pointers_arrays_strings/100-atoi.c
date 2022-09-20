#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int i = 1;
	unsigned int d = 0;

	do{
		if (*s == ' - ')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
				d = (d * 10) + (*s - '0');
		}
		else if (d > 0)
		{
			break;
		}
	}
	while (*s++)
	{
		return (d * sign);
	}
}
