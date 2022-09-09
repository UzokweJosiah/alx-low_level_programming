#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("the string %d is 0\n", n);
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not o\n");
	return (0);
}
