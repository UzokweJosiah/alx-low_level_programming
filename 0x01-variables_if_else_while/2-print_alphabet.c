#include <stdio.h>
int main(void)

/* main - prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
