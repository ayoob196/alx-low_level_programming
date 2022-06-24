#include <stdio.h>
#include "main.h"
/**
 * main - a
 * @argc: d
 * @argv: d
 * Return: d
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
