#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: (0);
 */
int main(void)
{
	char alp;

	for (alp = "z"; alp >= "a"; alp--)
	putchar(alp);
	putchar('\n');
	return (0);
}
