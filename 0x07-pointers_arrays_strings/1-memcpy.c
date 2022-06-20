#include "main.h"
/**
 * *_memcpy - a
 * @dest: d
 * @src: d
 * @n: d
 * Return: w
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(dest + count) = *(src + count);
	}
}
