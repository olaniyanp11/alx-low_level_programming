#include <stdio.h>
/**
 * main - print the alphabets
 *
 * Return : always 0 (success)
 */
int main(void)
{
	char alp[55] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 56; i++)
	{
	putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
