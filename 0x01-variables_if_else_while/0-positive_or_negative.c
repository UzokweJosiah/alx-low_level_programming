#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign random numbeer to the variable n
 *
 * Description:The program assign random number to the variable n, 
 * checks if a number is positive or negative and prints it out.
 *
 * Return: Always 0 (Success)
 */

int main(void)
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
