#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**main - start
 *
 * n is the variable
 *
 * Return :0 (sucess)
 */
int main(void){

	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf(n);

	if (n > 0){

		printf("is positive\n");

	}

	else if (n == 0){

		printf("is zero\n");

	}

	else {
		printf("is negative\n");
	}

