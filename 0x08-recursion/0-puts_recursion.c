#include "main.h"
/**
 * _puts_recursion -a 
 * @s: d
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_ptuchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
	return;
}
