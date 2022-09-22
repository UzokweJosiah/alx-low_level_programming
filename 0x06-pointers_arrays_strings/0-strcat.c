#include "main.h"

int count_string(char *str);

/**
 * _strcat - concatenates two strings
 * @dest: stringd to append to
 * @src: string to add
 *
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int src_length, dest_lenght, i;

	src_length = count_string(src);
	dest_length = count_string(dest);

	for (i = 0; i < src_length; i++)
	{
		dest[i + dest_length] = src[i];
	dest[src_length + dest_length + 1] = '\0';
	}

	return (dest);
}

/**
 * count_string - count number of char in a string excluding '\0'
 * Return: total string length
 * @str: being the string to count
 */

int count_string(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
