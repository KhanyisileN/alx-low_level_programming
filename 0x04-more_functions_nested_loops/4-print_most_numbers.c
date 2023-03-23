#include "main.h"
/**
 * print_most_numbers - prints most numbers in a sequence
 * declaration: skips numbers 2 and 4
 * return: numbers between 0 and 9
 */
void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
	if (n == 2 || n == 4)
	{
	continue;
	}
	else
	{
		_putchar( n + 0);
	}
	}
	_putchar('\n');
}
