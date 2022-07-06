#include "function_pointers.h"

/**
 * int_index - a
 * @array: a
 * @size: a
 * @cmp: a
 * Return: a
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
