#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - This program prints the alphabeet in lower case
 *
 * Description:'This program prints alphabet in lowercass
 * except the alphabet q and e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
