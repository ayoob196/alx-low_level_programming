#include "main.h"
/**
 * *_memset - sd
 * @s: s
 * @b: d
 * @n: d
 * Return: d
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}
	return (s);
}
