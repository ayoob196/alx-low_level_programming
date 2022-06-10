#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - tests function that prints if integer is positive or negative
 * postitive_or_negative - helo
 * @i: helo
 * return: helo
 */
void postitive_or_negative(int i)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}
int main(void)
{
	int i = 0;

	postitive_or_negative(i);
	return (0);
}
