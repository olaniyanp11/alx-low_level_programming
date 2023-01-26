#include "lists.h"

/**
 * calledFirst - prints before the main program
 */
void __attribute__((constructor)) calledFirst()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
