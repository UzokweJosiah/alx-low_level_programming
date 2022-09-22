#include <unistd.h>

/**
 * _putcar - writes the charachter c to stdout
 * @c: The caracter to print
 *
 * Return: on success 1
 * on erro, -1 is returned, and erro is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
