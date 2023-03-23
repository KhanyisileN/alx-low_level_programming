#include "main.h"
/**
 * _isupper - checks if a later is super
 * @n: the number to be checked
 * Return: 1 if letter is super or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
