#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the elements instruct dog
 * @d: a pointer to the stucture
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
		{
			printf("(nill)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
			printf("age: %f\n", d->age);
		if (!d->owner)
		{
			printf("(nill)");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
	else
	{
		printf("(nill)");
	}
}
