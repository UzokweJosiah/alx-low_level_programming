#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
/*
*main -assignd a random number every time n is call
*it execites and prints it
*and finally reyurns 0 if successful
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