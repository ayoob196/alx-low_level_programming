#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - helo
 * @n: helo
 */

void print_to_98(int n)
{
	int start = n;

	if (start < 98)
	{
		for ( ; start < 99; start++)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for ( ; start > 97; start--)
		{
			printf("%d", start);
			if (start != 98)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}
