#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 *
 * Description:'This program prints all the numbers of base 16
 * in lowercase, folllow by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);

}
