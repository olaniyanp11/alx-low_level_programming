#include "dog.h"
/**
 * print_dog - prints the elements instruct dog
 * @d: a pointer to the stucture
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner);
	}
	else
	{
		printf("(nill)");
	}
}
