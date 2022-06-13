#include "main.h"
/**
 *  _strlen - k
 *  @s: d
 *  Return: f
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
