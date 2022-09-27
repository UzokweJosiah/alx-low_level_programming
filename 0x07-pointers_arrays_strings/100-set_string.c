#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: a pointer to pointer of type char
 * @to: a string to set
 *
 * Return: char
 */

void set_sting(char **s, char *to)
{
	*s = to;
}
