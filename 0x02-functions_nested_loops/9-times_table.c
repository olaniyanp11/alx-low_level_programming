#include "main.h"

/**
 * times_table - a function that prints the \
 * 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, j;
	char comma = ',', space = ' ';

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int p = i * j;

			if (j == 9)
			{
				if (p < 10)
				{
					_putchar(space);
					_putchar((p % 10) + ('0' - 0));
				}
				else
				{
					_putchar((p / 10) + ('0' - 0));
					_putchar((p % 10) + ('0' - 0));
				}
			}
			else if (j == 0)
			{
				_putchar(p + ('0' - 0));
				_putchar(comma);
				_putchar(space);
			}
			else
			{
				_putchar((p / 10) + ('0' - 0));
				_putchar((p % 10) + ('0' - 0));
				_putchar(comma);
				_putchar(space);
			}
		}
		printf("\n");
	}
}
