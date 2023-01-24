#include "main.h"

/**
 * jack_bauer -  a function that prints
 * every minute starting from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + ('0' - 0));
			_putchar((i % 10) + ('0' - 0));
			_putchar(':');
			_putchar((j / 10) + ('0' - 0));
			_putchar((j % 10) + ('0' - 0));
			_putchar('\n');
		}
	}
}
