#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - helo
 * @i: helo
 */
void positive_or_negative(int i)
{
	int n;

	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

}
