#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - access
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0i)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is zero\n");
	else
		printf("%d is negative\n");
	return (0);
}

