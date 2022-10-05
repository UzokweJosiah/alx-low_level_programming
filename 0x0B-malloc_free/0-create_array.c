#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creats an array of chars and initialies
 * it with specfic char
 * @size: The of the array
 * @c: The character to initialise
 *
 * Return: 0 if size equal zero, else return the character
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size  == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	*(p + i) = '\0';
	return (p);
}
