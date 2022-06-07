#include "stdio.h"

/**
 * print_sign - prints the sign of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
			return (1);
	}
	else if (c == 0)
	{
		putchar('0');
		return (0);
			}
	else if (c < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}
