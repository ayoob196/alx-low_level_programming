#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - f
 * @n: fd
 * Return: df
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - f
 * @n: f
 * @i: f
 * Return: fd
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
