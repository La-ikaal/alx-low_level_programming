#include "main.h"
#include <stdio.h>

/**
 * print_numbers: prints numbers from 0 to 9
 * @n - number between 0 and 9
 * Return: no value returned
 */
void print_numbers(void)
{
	int n;
	
	for (n = 0; n <= 9 ; n++)
		putchar(n + '0');
	putchar('\n');
	return;
}
