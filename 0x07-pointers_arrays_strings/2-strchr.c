#include <stdio.h>
#include "main.h"
/**
 * *_strchr - d
 * @s: d
 * @c: s
 * Return: d
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
