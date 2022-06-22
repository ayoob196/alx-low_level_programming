#include "main.h"
/**
 * factorial - d
 * @n: d
 * Return: d
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
