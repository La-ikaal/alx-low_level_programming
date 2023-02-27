#include "main.h"
#include <stdio.h>

/**
 * swap_int -swaps value of two integers
 * @a & @b : two integers to be swapped
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
