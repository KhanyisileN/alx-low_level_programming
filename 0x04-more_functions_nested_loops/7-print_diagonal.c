#include "mian.h"
/**
 * print_diagonal - draws diagonal lines
 * @n: the number of times to print the diagonal
 * Retuen: empty
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 1; x < n; x++)
	{
	for (y = 1; y < x; y++)
	{
	_putchar(92);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
