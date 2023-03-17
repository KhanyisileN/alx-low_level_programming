#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - prints the last digit of the number stored in the variable n
 * and if it is greater than 5, less than 6, or 0
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int m;

	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is  greater than 5\n",
				n, m);
	}
	while (m < 6 && m |= 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
				n, n % 10);
	}
	return (0);
}
