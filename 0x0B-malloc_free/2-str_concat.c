#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - A function that concatentes two stings
 * @s1: first string to concatent
 * @s2: second string to concatent
 *
 * Return: on success pointer that contains the
 * concatented strings, on error NUll
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, length1 = 0, length2 = 0;
	char *s3;

	while (s1 && s1[length1])
		length1++;

	while (s2 && s2[length2])
		length2++;

	s3 = malloc(sizeof(char) * (length1 + length2 + 1));

	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < length1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (length1 + length2))
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
	}
	s3[i] = '\0';
	return (s3);
}
