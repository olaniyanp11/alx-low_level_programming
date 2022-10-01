#include <stdio.h>

/**
 * main - to print out name of the file
 * @argc: counts the number of command line arguement
 * @argv: is the array that contains the command line arguement
 * Return: 0 success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
