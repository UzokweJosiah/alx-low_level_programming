#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * This program prints the alphabeet in lower case
 * except q and e
 */
int main(void)
{
	int alphabet ='a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
