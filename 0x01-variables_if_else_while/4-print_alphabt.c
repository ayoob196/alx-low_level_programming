#include<stdio.h>

/**
 * main - main does something
 *  Return: returns someting
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q') continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
