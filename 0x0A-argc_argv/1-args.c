#include <stdio.h>

/**
 * main -print out number of passedf arguement
 * @argc: counts the number of command line arguements
 * @argv: arguemaent for checking size
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
