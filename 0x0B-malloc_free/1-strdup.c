#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - a function that returns a pointer to a newely allocated space in memory
 * @*str: a pointer to a duplicate string
 *
 * Return: NULL if string is zero or insufficient memory was available.
 * on success returns a pointer to the duplicate
 */

char *_strdup(char *str)
{
	char unsigned int i = 0, length = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;
	return (dup);
}
