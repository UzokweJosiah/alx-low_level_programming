#include <stdio.h>

/**
 * main - prints lower cass alphabet in reverse
 *
 * Description:'This program prints the lowercase alphabet in
 * reverse, followed by a new line'
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);

}
