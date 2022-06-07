#include "stdio.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: number being tested
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int result = n % 10;

	result = result < 0 ? result * -1 : result;
	putchar(result + '0');
	return (result);

}
