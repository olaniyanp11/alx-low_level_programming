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
		if (!(d->name))
		{
			printf("(nil)");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (!(d->owner))
		{
			printf("(nil)");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
