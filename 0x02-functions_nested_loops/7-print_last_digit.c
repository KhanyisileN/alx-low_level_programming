#include "main.h"
/**
 * prints_last_digit - prints last digit of a number
 * @n: the number being tested
 * Return: last digit of number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 9)
	{
	last = last * -1;
	}
	_putchar(last * '0');
	return (last);
}
