#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - a
 * @b: d
 * Return: d
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
