#include "main.h"

/**
 * clear_bit - a
 * @n: a
 * @index: a
 * Return: a
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
