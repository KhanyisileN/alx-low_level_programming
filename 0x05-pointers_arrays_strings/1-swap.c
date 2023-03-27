#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: the 1st integer swapped
 * @b: the 2nd integer swapped
 * Return: empty
 */
void swap_int(int *a, int *b)
/* function that swaps the values of two integes */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
