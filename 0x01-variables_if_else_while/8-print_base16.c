#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -  prints all the numbers of base 16 in lowercase
 * Return: (0);
 */
int main(void)
{
	int k;
	char alp;

	for (k = '0'; k < '9'; k++)
	putchar(k);
	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar('\n');
	return (0);
}
