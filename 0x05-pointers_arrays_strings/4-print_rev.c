#include "main.h"
/**
 * print_rev - sf
 * @s: f
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (si[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
