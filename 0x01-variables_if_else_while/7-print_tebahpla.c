#include<stdio.h>
/**
 * main - main
 * Return: i'm tired
 */
int main(void)
{
	char start;

	for (start = 'z'; start >= 'a'; start--)
	{
		putchar(start);
	}
	putchar('\n');
	return (0);
}
