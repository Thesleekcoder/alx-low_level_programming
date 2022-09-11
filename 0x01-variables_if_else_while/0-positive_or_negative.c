#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * 	* Main -> This assigns a random number to the variable  n each time the code is executed
 *
 * 	and print the last digit of the stored  in the  n variable
 *
 * 	* Return: ALways 0 (Success)
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
			printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("% is negative\n", n);
	}
	return (0);
}
