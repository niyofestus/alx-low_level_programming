#include "stdio.h"

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
