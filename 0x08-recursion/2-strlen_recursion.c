#include "main.h"
/**
 * _strlen_recursion - f
 * @s: d
 * Return: d
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
