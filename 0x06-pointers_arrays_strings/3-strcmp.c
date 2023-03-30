#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: the first string compared
 * @s2: the second string compared
 * Return: if str1 < str2, the negative diff of the 1st unmatched characters
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the 1st unmatched character.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
