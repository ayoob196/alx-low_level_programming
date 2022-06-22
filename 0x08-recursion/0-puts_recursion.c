#include "main.h"
/**
 * _puts_recursion -a
 * @s: d
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_ptuchar(*s);
	_puts_recursion(s + 1);
}
