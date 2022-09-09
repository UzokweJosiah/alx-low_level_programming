#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
/**
 * main - prints whether the number stored in the
 * variable n is positive or negative
 * Return: Always 0 (Success)
 */

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
