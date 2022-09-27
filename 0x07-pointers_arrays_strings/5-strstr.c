#include <stdio.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return; pointer to the begining of the located subtring
 * or null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *pn = needle, *ph = haystack;

	while (*haystack)
	{
		ph = haystack;
		needle = pn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);

}
/**
{

	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j]
					break;
		}
		if (!needle[j])
		{
		return (&haystack[i]);
		}

	}
	return (NULL);
}
