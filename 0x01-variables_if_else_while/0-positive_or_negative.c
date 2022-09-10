











#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* * Main - Entry point
 *
 * * Return: Always 0 (Success)
 *
 */
int void (main)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
	printf("%d is positive\n", n);
return (0);
}
