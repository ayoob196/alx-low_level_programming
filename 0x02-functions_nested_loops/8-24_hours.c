#include"main.h"
/**
 * jack_bauer - helo
 */
void jack_bauer(void)
{
	int count = 0;
	int count2 = 0;

	while (count < 24)
	{
		while (count2 < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			count2++;
		}
		count++;
	}
}
