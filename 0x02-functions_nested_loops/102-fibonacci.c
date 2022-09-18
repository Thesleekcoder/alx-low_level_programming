#include <stdio.h>
#include "main.h"
/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c;

	printf("%lu, %lu", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
