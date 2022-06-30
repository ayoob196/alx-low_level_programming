nclude <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a
 * @a: d
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
