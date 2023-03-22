#include "main.h"
/**
 * main -  prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabetx10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
