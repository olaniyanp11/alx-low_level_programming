#ifndef __DOG_H__
#define __DOG_H__
#include <stdio.h>
struct dog
{
	char* name;
	float age;
	char* owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
