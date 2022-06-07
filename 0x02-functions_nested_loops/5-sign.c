  #include "stdio.h"

/**
 * print_sign - Prints the positive or negative sign of the argument, if any
 *
 * @c:          Argument to check against for signs, if any
 *
 * Return:      (1) if @c is a positive number
 *              (0) if @c is zero
 *              (-1) if @c is a negative number
 */

int print_sign(int c)
{
	if (c == 0)
	{
		putchar('0');
		return (0);
	}
	else if (c > 0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		putchar('-');
		return (1);
	}
}
