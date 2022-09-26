#include <stdio.h>
#include "main.h"

/**
 * *_strspn - gets the lengt of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of byte in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, tem;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		tem = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			f++;
			tem = 1;
		}
		if (tem == 0)
		{
			return (f);
		}
	}
	return (0);
}
