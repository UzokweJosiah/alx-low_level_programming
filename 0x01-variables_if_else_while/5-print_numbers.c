#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all single digit number
 *
 * Description:'This program print all single digit numbers
 * of base 10 starting from 0'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10;)
	{
		printf("%d", num);
		num++;
	}
	return (0);
}
