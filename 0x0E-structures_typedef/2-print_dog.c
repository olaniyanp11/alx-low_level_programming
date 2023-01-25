#include "dog.h"

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n",d->name);
		printf("age: %f\n",d->age);
		printf("owner: %s\n",d->owner);
	}
	else
	{
		printf("(nill)");
	}
}
