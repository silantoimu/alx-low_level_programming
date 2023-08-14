#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the attributes of a struct dog.
 * @d: Pointer to the struct dog to be printed.
 *
 * Description: This function prints the attributes of a struct dog,
 * including name, age, and owner. If any attribute is NULL, "(nil)"
 * will be printed in its place.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

