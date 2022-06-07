#include "stdio.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar((hr / 10) + '0');
			putchar((hr % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
		}
	}
}
