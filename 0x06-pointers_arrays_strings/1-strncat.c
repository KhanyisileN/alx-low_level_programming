#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @dest: the changed string
 * @src: the source string
 * @n: the number of bytes from src
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
