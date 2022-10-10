#include <<stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 * @d: struct do to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->age, d->owner, d->name);
}
