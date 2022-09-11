#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * *Main - This is the point where the program starts
 *
 * *Return: Alaways 0 (Success)
 *
 */

int void(main)
{
	int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
		if(n == 0)
			printf("%d is zero \n", n);
		if (n <0)
		{
		printf("%d is negative\n", n);
		}
		return (0);
}
