#include "stdio.h"
/**
 * print_alphabet - check the code for alx students.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar (alp);
		alp++;

	}
	putchar ('\n');

}
