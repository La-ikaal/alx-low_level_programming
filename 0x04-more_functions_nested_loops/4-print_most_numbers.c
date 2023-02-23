#include "main.h"
#include <stdio.h>

/**
 * print_most- numbers:print numbers from 0 to 9
 * @n: numbers from 0 to 9
 * Return:  return null
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		putchar(n + '0');
	}
	putchar('\n');
	return;
}

