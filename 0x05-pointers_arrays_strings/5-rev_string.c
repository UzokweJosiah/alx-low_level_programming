#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Description: print a string in reverse
 * Return: null
 */

void rev_string(char *s)
{
	char temp;
	int i;
	int num = 0;
	int num1 = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	num1 = num - 1;

	for (i = 0; i < num / 2; i++)
	{
		temp = s[i];
		s[i] = s[num];
		s[num1--] = temp;
	}
}
